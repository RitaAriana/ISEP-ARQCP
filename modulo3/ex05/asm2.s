.section .data
    .global ptrvec
    .global num

.section .text
    .global vec_avg
vec_avg:

    movswl num(%rip), %r8d
    pushq %rcx
    call vec_sum
   	popq %rcx
   	movl $0, %edx
	movswl num(%rip), %r8d
	cmpl $0, %r8d
	je divisor_zero
	
	cdq
	idivl %r8d
	jmp  end
	
	divisor_zero:
	movl $0, %eax
	
end:
    ret
