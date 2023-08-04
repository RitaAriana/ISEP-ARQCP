.section .text
	.global sum_n
sum_n:
	movl $0, %eax
	movl $1, %r8d

	cmpl %eax, %edi
	jle end

	jmp loop

loop:
	addl %r8d, %eax

	cmpl %r8d, %edi
	je end

	incl %r8d

	jmp loop
end:
	ret