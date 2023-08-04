.section .text
	.global inc_and_square

inc_and_square:
    # *v1 em %edi
	# v2 em %esi

	movl (%rdi), %r8d
	addl $1 , %r8d
	movl %r8d , (%rdi)
	
	jmp square

square:
	movl %esi, %eax
	mull %esi
	jmp end

end:
	ret

	
	