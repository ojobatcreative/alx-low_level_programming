section .data
	message db 'Hello, Holberton', 0
	format db '%s', 0

section .text
	extern printf

global _start

_start:
	sub rsp, 8

	mov rdi, format
	mov rsi, message
	xor eax, eax
	call printf

	add rsp, 8

	mov eax, 60     ; exit syscall number
	xor edi, edi    ; exit status code (0)
	syscall
