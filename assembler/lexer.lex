%{
#include <stdio.h>

//extern YYSTYPE yylval;
#include "y.tab.h"
typedef struct _par_ams{
	char* instr;
	char* op1;
	char* op2;
	char* label;
	int numops;
	int line;
	int instr_count;
	int labels_count;
}ASMPARAMS;

extern ASMPARAMS* keked;
%}

%%
^[ \t]*[a-zA-Z][a-zA-Z0-9]+:    	memset(keked->label,0,64);strncpy(keked->label,yytext,63);return DECLABEL; 
r[0-8]         						strncpy((keked->numops)?keked->op2:keked->op1,yytext,63);keked->numops++;return REGISTER; 
[0-9]+          					strncpy((keked->numops)?keked->op2:keked->op1,yytext,63);keked->numops++;return HEXNUM; 
0x[0-9a-fA-F]+   					strncpy((keked->numops)?keked->op2:keked->op1,yytext,63);keked->numops++;return HEXNUM; 
^[ \t]*[a-zA-Z]+      				keked->instr_count++; keked->numops=0;memset(keked->op1,0,64);memset(keked->op2,0,64);memset(keked->instr,0,64); strncpy(keked->instr,yytext,63);return INSTRUCTION;
[a-zA-Z][a-zA-Z0-9]*     			memset(keked->label,0,64);strncpy(keked->label,yytext,63);return LABEL;
,                       			return COMMA;
\[                   				return OPREF ;
\]             						return CLOSEREF ;
(\;.*)?\n							keked->line++;return COMMENT;
[ \t]+                  			;
%%













