.section .data
    .global base
    .global height
    .equ CONST, 2

.section .text
    .global getArea

getArea:
    movl base(%rip), %eax
    movl height(%rip), %r8d
    mull %r8d
    movl $CONST, %r8d
    divl %r8d
    ret

