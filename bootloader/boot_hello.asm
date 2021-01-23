; Test printing 'HELLO' using BIOS routines from the boot sector

mov ah, 0x0e ; int 10/ah = 0eh -> scrolling teletype BIOS routine

mov al, 'H'
int 0x10
mov al, 'E'
int 0x10
mov al, 'L'
int 0x10
mov al, 'L'
int 0x10
mov al, 'O'
int 0x10

jmp $ ; Jump to the current address forever

; Padding and magic number for BIOS to look for

times 510-($-$$) db 0

dw 0xaa55
