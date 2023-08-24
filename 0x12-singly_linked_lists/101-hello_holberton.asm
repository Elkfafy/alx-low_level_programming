mov rdi, formtStr
mov rsi, 5
mov al, 0

extern printf
call printf

ret

formtatStr:
	db `Hello, Holberton\n`, 0
