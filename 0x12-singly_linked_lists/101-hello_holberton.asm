section .data
text db 'Hello, Holberton', 10, 0

section .text
global main
extern printf

main:
push rbp
mov rbp, rsp ; set up stack frame
sub rsp, 16 ; reserve space for two pointers

; load address of text string into rdi
lea rdi, [text]

xor eax, eax ; set return value to 0
call printf ; call printf with one argument

add rsp, 16 ; restore the stack pointer
mov rsp, rbp ; restore the stack pointer to the original position
pop rbp ; restore the base pointer
ret
