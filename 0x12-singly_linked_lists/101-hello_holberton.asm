/* The assembly code: /*

extern printf

/* The text section: */
section .text
global main

/* The main section: */
main:
push rbp
mov rdi, fmt
mov rsi, write_message
mov rax, 0
call printf
pop rbp
mov rax, 0
ret

/* The data section: */
section .data
write_message: db "Hello, Holberton", 0
fmt: db "%s", 10, 0
