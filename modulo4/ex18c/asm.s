.section .text
	.global changes_vec

changes_vec:
	movl $0, %r8d
	jmp loop

loop:
	cmpl %r8d, %esi
	je end

	pushq %rax
	pushq %rcx

	call changes

	popq %rcx
	popq %rax

	addq $4, %rdi
	incl %r8d

	jmp loop

end:
	ret

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
		