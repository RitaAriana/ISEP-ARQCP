.section .text
	.global calculate
	.global print_result

.section .data
sum:
	.int 0

product:
	.int 0 

calculate:

	pushq %rbp
	movq %rsp , %rbp
	subq $16 , %rsp

	movl %edi, %ecx
	movl %esi, %edx
	movl %edx, %r11d

    pushq %r11
	
	addl %edx,%ecx

	movl %ecx, -8(%rbp)
	movl %edi, %ecx
    imull %edx, %ecx
    movl %ecx, -16(%rbp)

	movl %edi, %r10d
    pushq %r10
    movq $0, %rdi
    movb $43, %dil
    movl %r10d, %esi
    movl -8(%rbp), %ecx 
    call print_result

	popq %r10
    popq %r11

	movq $0, %rdi
    movb $42, %dil
    movl %r10d, %esi
    movl -16(%rbp), %ecx
    movl %r11d, %edx
    call print_result

	popq %rdi 
	popq %rsi
	popq %rax

	subl %eax, %ecx
	movl %ecx, %eax

	movl -8(%rbp), %eax
    subl -16(%rbp), %eax

    movq %rbp, %rsp
    popq %rbp

	ret
