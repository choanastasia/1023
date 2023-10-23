section .text
    global _start
_start:
	xor rdx, rdx
	push rdx
	mov rax, 0x73702f2f6e69622f
	push rax
	mov rdi, rsp
	push rdx
	push rdi
	mov rsi, rsp
	xor rax, rax
	mov al, 0x3b
	syscall
	
