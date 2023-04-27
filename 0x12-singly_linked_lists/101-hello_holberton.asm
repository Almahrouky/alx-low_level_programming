section .data
msg: db "Hello, Holberton", 10
len: equ $ - msg
section .text
global main
extern printf
main:
mov rdi, msg
mov rax, 0
call printf
mov rax, 60
mov rdi, 0
syscall
