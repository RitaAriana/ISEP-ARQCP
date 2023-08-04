.section .data
    .global ptrvec
    .global num

.section .text
    .global vec_zero

vec_zero:
    movl $0, %eax # rax cleaning
    movq ptrvec(%rip), %rax # pointer to rax

    movl $0, %esi # contador de updates

    movl $0, %r8d # contador em r8d de iteraçoes
    movl num(%rip), %r9d # contador em r9d de tamanho
    
    jmp loop

loop:
    cmpl %r8d, %r9d
    je end

    movl $0, %r8d
    movw (%rax), %cx

    cmpw $100, %cx
    jge changeToZero

    jmp nextIteration

changeToZero:
    movw $0, (%rax)
    incl %esi
    jmp nextIteration

nextIteration:
    addq $2, %rax
    incl %r8d
    jmp loop
    
end:
    movl %esi, %eax
    ret
