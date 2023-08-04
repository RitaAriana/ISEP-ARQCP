.section .data
z:
	.int 0

.section .text
	.global calc

calc:
	movl z(%rip), %eax
	movl (%rsi), %eax
	subl %edi, %eax

	imull %eax, %edx

	subl $2, %edx

	movl %edx, %eax
	
	ret
