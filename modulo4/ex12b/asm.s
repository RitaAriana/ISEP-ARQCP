.section .text
	.global count_bits_zero

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
