    section .data
format:	db "Hello, Holberton\n",0

    section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    mov rdi, format
    call printf

    pop rbp
    mov rax, 0
    ret
