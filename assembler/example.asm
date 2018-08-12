boot:
mov r1, 0    ; addr
mov r2, 72   ; sym
orr r2, 0x80 ; mask
mov [r1],r2  ; Send
mov [r1],r1  ; clear

mov r2, 101  ; sym
orr r2, 0x80 ; mask
mov [r1],r2  ; Send
mov [r1],r3  ; clear

mov r2, 108  ; sym
orr r2, 0x80 ; mask
mov [r1],r2  ; Send
mov [r1],r3  ; clear

mov r2, 108  ; sym
orr r2, 0x80 ; mask
mov [r1],r2  ; Send
mov [r1],r3  ; clear

mov r2, 111  ; sym
orr r2, 0x80 ; mask
mov [r1],r2  ; Send
hlt:
jmp hlt
