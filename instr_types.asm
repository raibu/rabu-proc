

1 type instr:

0|opc4|mem8|rd3

rd -- destination register (r0-r7)
mem8 from 0 to 0xff

add rd, [mem8]
sub rd, [mem8]
mul rd, [mem8]
div rd, [mem8]
and rd, [mem8]
orr rd, [mem8]
xor rd, [mem8]
mov rd, [mem8]
adc rd, [mem8]
sbb rd, [mem8]
mov [mem8], rd
cmp rd, [mem8]
cpc rd, [mem8]
shl rd, [mem8]
shr rd, [mem8]
asr rd, [mem8]

2 type instr

10|opc3|imm8|rd3
rd -- destination register (r0-r7)
imm8 from 0 to 0xff

add rd, imm8
sub rd, imm8
mul rd, imm8
div rd, imm8
and rd, imm8
orr rd, imm8
xor rd, imm8
mov rd, imm8


3 type instr
110|i/n|c/u|z/c|a/r|RES|imm8
c/u -- conditional(1) or unconditional
z/c -- zero(0) or carry(1)
i/n -- inverted(1) or not inverted flags 
a/r -- absolute or PC-relative jump
RES--reserved

jmp imm8
jc imm8
jnc imm8
jz imm8
jnz imm8


4 type instr 

111|opc4|fa|rnmp|rdmp|rn3|rd3
fa -- affect flags 
rnmp -- rn is memory pointer 
rdmp -- rd is memory pointer (conflicts with rdmp!)
rd -- destination register (r0-r7)

BY OPERAND TYPES:
1) mov rd, rn 
2) mov [rd], rn
3) mov rd, [rn]
nf suffix does not to affect flags:
for example 
addnf r1,3 adds 3 to r1 and does not affect ZF/CF

