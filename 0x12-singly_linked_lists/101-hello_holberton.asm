section .data
text db 'Hello, holberton %s!', 0
name db 'Hello, Holberton',10, 0

section .text
global main
extern printf

main:
push rbp
mov rbp, rsp ; set up stack frame
sub rsp, 16 ; reserve space for two pointers

; load address of name string into rdi
; the address of text string is already hardcoded in the instruction
mov rdi, name

; load address of text string into rsi
mov rsi, text
xor eax, eax ; set return value to 0
call printf ; call printf with two arguments

add rsp, 16 ; restore the stack pointer
mov rsp, rbp ; restore the stack pointer to the original position
pop rbp ; restore the base pointer
ret
