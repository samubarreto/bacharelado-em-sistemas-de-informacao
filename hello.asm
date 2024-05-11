section .data
    msg db 'Hello, world!',0

section .text
    global _start

_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, 13
    syscall

    mov rax, 60
    xor rdi, rdi ; não sei nada de assembly
    syscall ; nasm -f win64 hello.asm -o hello.obj -- link /subsystem:console /entry:_start hello.obj
