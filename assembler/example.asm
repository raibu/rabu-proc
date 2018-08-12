loop1:
mov r0,0x80 
mov r1,0x00
mov r2,1
mov [r1],r0
loop2:
add r0,0
shr [r1], r2
jz loop1 
jmp loop3
add r0,r0 
div r0, r1
loop3:
jmp loop2 
