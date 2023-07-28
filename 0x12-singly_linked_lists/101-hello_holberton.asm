section .data
	format db "Hello, Holberton", 0

section .text
	extern printf

global main
main:
	sub rsp, 8     ; Align stack

	mov rdi, format
	xor eax, eax   ; Clear EAX register
	call printf

	add rsp, 8     ; Restore stack

	xor eax, eax   ; Return 0 from main
	ret
