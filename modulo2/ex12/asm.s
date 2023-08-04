.section .data
    .global A
    .global B

.section .text
    .global isMultiple

isMultiple:

    movl $0, %edx   # Clean edx in order to allow the division to be performed

    movl B(%rip), %r8d
    movl A(%rip), %eax

    cmpl $0, %r8d   # compares 0 to op2 (cannot divide by 0)
	je conditionZero
	
    idivl %r8d
    
    movl $0, %eax 
    movl $0, %r8d

    cmpl %edx, %r8d
    je turnPositive

    jmp end

conditionZero:
	movl $0, %eax
    jmp end

turnPositive:
    movl $1, %eax
    jmp end

end:
    ret
