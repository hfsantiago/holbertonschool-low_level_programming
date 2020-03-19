extern  printf ; delaring function printf
			section .text ; section with text
			global  main ; declaring global main function, entry point

			section .data
msg: 	db "Hello, Holberton", 0 ;delare msg end in null
fmt:	db "%s", 10, 0 ;declare format, follow by \n(10) and null

main: ;assembling main function
	        push    rbp	; push to stack

	mov     rdi, fmt	; move format to the register rdi
	mov     rsi, msg ; move message to register rsi
	       	call    printf	 ; call the printf function

			pop rbp	; pop stack
	mov rax, 0 ; Exit 0 for prinft
	ret ; Return

