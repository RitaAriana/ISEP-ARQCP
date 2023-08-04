.section .data
    .global num
    .equ div, 2

evenNegativeVar:
    .byte 1

oddNegativeVar:
    .byte 2

evenPositiveVar:
    .byte 3

oddPositiveVar:
    .byte 4


.section .text
    .global check_num

check_num:
    movl num(%rip), %eax # mover o numero para %eax  
    movl num(%rip), %r8d # mover o numero para %r8d para depois comparar
    movq $div, %rdi # mover o divisor para o devido registo

    movq $0, %rdx
    cdqe
    divq %rdi, %rax

    cmpq $0, %rdx
    je even
    jne odd

    ret

even:
    movl $0, %eax
    cmpl $0, %r8d
    js evenNegative
    jns evenPositive 

odd:
    movl $0, %eax
    cmpl $0, %r8d
    js oddNegative
    jns oddPositive 

evenNegative:
    movb evenNegativeVar(%rip), %al
    ret

evenPositive:
    movb evenPositiveVar(%rip), %al
    ret

oddNegative:
    movb oddNegativeVar(%rip), %al
    ret

oddPositive:
    movb oddPositiveVar(%rip), %al
    ret
