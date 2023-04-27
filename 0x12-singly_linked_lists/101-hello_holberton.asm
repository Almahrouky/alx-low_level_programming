section .data
    msg: db "Hello, Holberton", 10 ; The string to print
    len: equ $ - msg ; The length of the string
section .text
    global main ; The entry point
    extern printf ; The printf function

; The main function
main:
    ; Prepare the arguments for printf
    mov rdi, msg ; The format string
    mov rax, 0 ; No floating point arguments
    ; Call printf
    call printf
    ; Exit the program
    mov rax, 60 ; The exit system call number
    mov rdi, 0 ; The exit code
