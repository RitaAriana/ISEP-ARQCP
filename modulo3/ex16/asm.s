.section .data
    .global ptr1
    .global ptr2
    .global num

.section .text
    .global swap

swap:
    movl $0, %eax
    movl $0, %r8d

    movq ptr1(%rip), %rax
    movq ptr2(%rip), %rcx


    movl $0, %r8d
    movl num(%rip), %r9d

    jmp loop

loop:

    cmpl %r8d, %r9d
    je end

    movl $0, %edx
    movl $0, %esi

    movb (%rax), %dl
    movb (%rcx), %sil

    movb %dl, (%rcx)
    movb %sil, (%rax)

    incl %r8d
    incq %rax
    incq %rcx

    jmp loop

end:
    ret
