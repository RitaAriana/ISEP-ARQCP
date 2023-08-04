.section .data
    .global num

.section .text
    .global steps

steps:
    movq num(%rip), %r8 #save the number when subtracting

    movq num(%rip), %rax
    movq $3, %rcx
    imul %rcx, %rax # multiplication by 3

    addq $6, %rax # sum 6 

    movq $0, %rdx
    movq $3, %rcx
    cqo
    idivq %rcx # divide by 3
    
    addq $12, %rax # sum 12 

    subq %r8, %rax # subtract num

    subq $1, %rax # subtract 1

    ret
