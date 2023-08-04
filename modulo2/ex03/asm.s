.section .data
    .global op1
    .global op2
    .equ CONST, 15

.section .text
    .global sum # int sum(void)
    .global sum_v2 # int sum_v2(void)

sum:
    movl op1(%rip), %r8d # place op1 in r8d
    movl op2(%rip), %eax # place op2 in eax
    addl %r8d, %eax # add r8d to eax. Result is in eax
    ret
sum_v2:
    movl op1(%rip), %eax # place op1 in eax
    movl op2(%rip), %esi # place op2 in esi
    movl $CONST, %r8d # place CONST in r8d
    movl $CONST, %edx # place CONST in edx
    subl %eax, %r8d
    subl %esi, %edx
    subl %edx, %r8d
    movl %r8d, %eax
    ret  
