.section .text
	.global cube

cube:
    # x em %edi
	movl %edi, %eax
	mull %edi
	mull %edi
	ret	   
	