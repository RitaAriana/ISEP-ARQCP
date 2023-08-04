.section .data
    .global ptrvec
    .global num

.section .text
    .global vec_sum

vec_sum:
    movl $0, %eax # limpeza de registos
    movl $0, %edx # limpeza de registos
    movl $0, %r9d # limpeza de registos
    
    movq ptrvec(%rip), %rax # passagem do apontador para rax
    movswl num(%rip), %r8d # passagem do numero de elementos para r8d
    incl %edx

    jmp loop

loop:
    movq (%rax), %rcx
    
    cmpl %edx, %r8d
    jl end
    
    addl %r8d, %r9d
    movq %rcx, (%rax)

    addq $4, %rax
    incl %edx

    jmp loop

end:
    movq %r9, %rax
    ret
