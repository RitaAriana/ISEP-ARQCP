.section .text
	.global count_even

count_even:
    # *vec em %rdi
	# n em %esi

	movl $0, %r9d # limpeza de registos
	movl $0, %r8d # limpeza de registos
	movl $0, %eax # limpeza de registos
	movl $0, %edx # limpeza de registos

	incl %r9d

	cmpl %r9d,%esi
	jge loop
	jmp end

loop:
	movw (%rdi), %ax
	movw $2, %cx
	idivw %cx
	cmpw $0, %dx
	je even
	jmp not_even

even:
	addl $1, %r8d

	incl %r9d
	cmpl %r9d,%esi
	jge incrementar_posicao

	jmp end

not_even:
	incl %r9d
	cmpl %r9d,%esi
	jge incrementar_posicao

	jmp end

incrementar_posicao:
	addq $2 , %rdi
	movl $0, %eax # limpeza de registos
	movl $0, %edx # limpeza de registos
	jge loop

end:
	movl %r8d, %eax 
	ret

	
	