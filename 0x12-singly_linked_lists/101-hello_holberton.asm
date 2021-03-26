	global main
	;;  fileName: hw64.asm
	;;  Minimal example invoking a system function (64 bits)
	section .data
message:	db "Hello, Holberton",10

	section .text
main:
	    mov rax, 1          ; rax = 1 for the write syscall
	    mov rdi, 1          ; rdi = 1, filedescriptor stdout
	    mov rsi, message   ; rsi = address of the string
	    mov rdx, 17         ; rdx = length of the string
	    syscall             ; make the system call
	    mov rax, 60         ; use the _exit syscall
		xor rdi, rdi    ; exit code 0
	    syscall             ; make syscall
