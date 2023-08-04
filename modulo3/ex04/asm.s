.section .data
    .global ptrvec
    .global num

.section .text
    .global vec_add_one

vec_add_one:
    movl $0, %eax # limpeza de registos
    movl $0, %edx # limpeza de registos
    
    movq ptrvec(%rip), %rax # passagem do apontador para rax
    movl num(%rip), %r8d # passagem do numero de elementos para r8d
    incl %edx

    jmp loop

loop:
    movq (%rax), %rcx
    
    cmpl %edx, %r8d
    jl end
    
    addq $1, %rcx
    movq %rcx, (%rax)

    addq $8, %rax
    incl %edx

    jmp loop

end:
    ret
