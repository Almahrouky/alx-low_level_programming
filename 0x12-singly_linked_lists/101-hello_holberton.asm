section .data
	msg db "Hello, Holberton",0xa
	len equ $ - msg
section .text
	global main
	extern printf
main:
	mov ri, msg
	mov rax, 0
call printf
	mov rax, 60
	mov ri, 0
