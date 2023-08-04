.section .text
	.global activate_bit

activate_bit:
	movl (%rdi), %eax # mover parametro para registo
	
	movl %esi, %ecx # mover pos do bit
	movl $1, %edx # bit 1 para primeira posicao do registo
	shll %cl, %edx # empurra para a posicao correta
	
	andl %edx, %eax # aplica-se a mask

	shr %cl, %eax

	cmpl $0, %eax
	je isZero

	movl $0, %eax
	ret

isZero:
	orl %edx, (%rdi)
	movl $1, %eax
	ret
