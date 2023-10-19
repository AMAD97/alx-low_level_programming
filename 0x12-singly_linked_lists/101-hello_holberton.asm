section .data
    format db "Hello, Holberton", 10, 0 ; The format string, including a newline character

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, format
    call printf
    pop rbp

    mov rax, 60          ; syscall number for exit
    xor rdi, rdi         ; Exit status 0
    syscall
