section .data
	hello	db "Hello, Holberton", 10, 0

section .text
	extern	printf
	global	main

main:
	push	rbp
	mov	rdi, hello
	mov	rax, 0
	call	printf

	pop	rbp
	mov	rax, 0
	ret
