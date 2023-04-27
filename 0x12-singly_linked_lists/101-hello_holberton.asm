section .data
    hello: db "Hello, Holberton", 0Ah ; 0Ah is the ASCII code for a new line

section .text
    global main
    extern printf

main:
    ; Set up stack frame
    push rbp
    mov rbp, rsp

    ; Call printf function to print hello message
    mov rdi, hello ; First argument: pointer to format string
    xor eax, eax   ; Clear eax register to indicate no floating point arguments
    call printf

    ; Clean up stack frame and return 0
    mov rsp, rbp
    pop rbp
    xor eax, eax   ; Return value of 0
    ret
