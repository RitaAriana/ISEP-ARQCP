.section .text
	.global sum_smaller
sum_smaller:
    # num1 em %edi
	# num2 em %esi
	# smaller em %rdx

	movl %edi, %eax
	movl %esi, (%rdx)

	addl %esi, %eax

	cmpl %edi, %esi
	jg firstBigger

	jmp end

firstBigger:
	movl %edi, (%rdx)
	jmp end

end:
	ret