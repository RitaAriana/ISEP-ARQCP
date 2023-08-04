.section .text
	.global changes

changes:
	movl $15, %eax
	shll $20, %eax

	movl (%rdi), %ecx

	andl %eax, %ecx

	sarl $20, %ecx

	cmpl $7, %ecx
	jg applyMask

	ret

applyMask:
	movl (%rdi), %ecx
	xorl %eax, %ecx

	movl %ecx, (%rdi)

	ret
		