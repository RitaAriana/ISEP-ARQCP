.section .data
    .equ CONST, 2
base:
    .int 2
    
height:
    .int 2
    
.global base, height


.section .text
    .global getArea

getArea:
    movl base(%rip), %eax
    movl height(%rip), %r8d
    mull %r8d
    movl $CONST, %r8d
    divl %r8d
    ret

