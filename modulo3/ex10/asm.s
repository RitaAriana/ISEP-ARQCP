.section .data
    .global ptr1
    .global ptr2
    .global ptr3

.section .text
    .global str_cat

str_cat:
    movl $0, %eax # limpeza de rax
    movl $0, %r8d # limpeza de rcx
    movl $0, %edx # limpeza de rdx

    movq ptr1(%rip), %rax # passagem da primeira string para registo
    movq ptr2(%rip), %rcx # passagem da segunda string para registo
    movq ptr3(%rip), %rdx # passagem da string final para registo

    loop1:
        movl $0, %esi
        movb (%rax), %sil
        movb %sil, (%rdx)
        
        cmpb $0, (%rax)
        je loop2

        incq %rax
        incq %rdx
        jmp loop1

    loop2:
        movl $0, %esi
        movb (%rcx), %sil
        movb %sil, (%rdx)
        
        cmpb $0, (%rcx)
        je end

        incq %rcx
        incq %rdx
        jmp loop2


end:
    ret
