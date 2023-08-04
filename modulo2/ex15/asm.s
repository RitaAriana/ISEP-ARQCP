.section .data
    .global A
    .global B
    .global C
    .global D

.section .text
    .global compute

compute:
    movl A(%rip), %eax
    movl B(%rip), %r8d
    imull %r8d, %eax

    movl C(%rip), %r8d
    addl %r8d,%eax

    movl D(%rip), %r8d

    je jump_if_equals

    movl $0, %edx
    cdq
    idivl %r8d
    jmp end
jump_if_equals:
    movl $0, %eax
    jmp end
end:
    ret


