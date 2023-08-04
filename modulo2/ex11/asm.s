.section .data
    .global op1
    .global op2

.section .text
    .global test_flags

test_flags:
    movl op1(%rip), %eax
    movl op2(%rip), %r8d
    addl %r8d, %eax

    jc carry_detected
    jo overflow_detected

    movq $0 , %rax
    jmp end

carry_detected:
	movq $1, %rax
    jmp end
			
overflow_detected :
    movq $1 , %rax    
    jmp end

end:
    ret

