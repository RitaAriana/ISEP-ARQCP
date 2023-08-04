.section .data
    .global op1
    .global op2

.section .text
    .global sum2ints

sum2ints:
    movslq op1(%rip), %rax
    movslq op2(%rip), %rcx
    addq %rcx, %rax 

    ret
