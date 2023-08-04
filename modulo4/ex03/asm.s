.section .text
	.global greatest

greatest:
    # a em %edi
	# b em %esi
	# c em %edx

	cmpl %esi, %edi
	jge compareAWithC
	jmp compareBWithC

compareAWithC:
	cmpl %edx, %edi
	jl greatestIsC
    movl %edi, %eax
    jmp end

compareBWithC:
	cmpl %edx, %esi
	jl greatestIsC
    movl %esi, %eax
    jmp end

greatestIsC:
	movl %edx, %eax
    jmp end

end:
	ret

	
	