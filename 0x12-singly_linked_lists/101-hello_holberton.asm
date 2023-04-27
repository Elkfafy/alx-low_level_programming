extern printf
global main

section .text
main :
	push msg
	call printf
	ret

section .data
msg : db 'Hello, Holberton', 10, 0
