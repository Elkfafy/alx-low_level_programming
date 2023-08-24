mov rdi, formtStr
mov rsi, Str
mov al, 0

extern printf
call printf

ret

formtatStr:
	db `%s\n`, 0
Str:
	db "Hello, Holberton", 10, 0
