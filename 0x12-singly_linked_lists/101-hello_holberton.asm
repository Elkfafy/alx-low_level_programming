extern _printf

global _main

section .text
_main :
	push msg
	call _printf
	ret

section .data
msg : db 'Hello, Holberton', 10, 0
