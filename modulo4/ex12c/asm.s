.section .text
	.global vec_count_bits_zero

vec_count_bits_zero:
	movl $0, %r8d # contador de iteracoes
	movl $0, %r9d # total de bits
	jmp vec_loop

vec_loop:
	cmpl %r8d, %esi
	je endVec

	movl (%rdi), %ecx

	pushq %rax
	pushq %rcx
	pushq %r8
	pushq %r9
	pushq %rdi

	movl %ecx, %edi

	call count_bits_zero

	popq %rdi
	popq %r9
	popq %r8
	popq %rcx
	addl %eax, %r9d
	popq %rax

	addq $4, %rdi
	incl %r8d
	jmp vec_loop
endVec:
	movl %r9d, %eax
	ret

count_bits_zero:
	movl $0, %ecx
	movl $0, %r8d
	movl $32, %r9d

	jmp loop 

loop:
	cmpl %r8d, %r9d	
	je end

	movl %edi, %eax

	and $1, %eax
	sar $1, %edi

	incl %r8d

	cmpl $0, %eax
	je isZero

	jmp loop

isZero:
	incl %ecx
	jmp loop
end:
	movl %ecx, %eax
	ret
