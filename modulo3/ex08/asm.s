.section .data
    .global even
    .global ptrvec
    .global num

.section .text
    .global test_even, vec_sum_even

test_even:
    movl $0, %eax
    movl $0, %edx
    movl $0, %r8d

    movq even(%rip), %rax 

    jmp func

func:
    movq $2, %rcx 
    idivq %rcx
    
    cmpq $0, %rdx
    jne isOdd
    je isEven

isOdd:
    movl $0, %eax
    ret

isEven:
    movl $1, %eax
    ret


# Second Function

vec_sum_even:

    movl $0, %r8d
    movq ptrvec(%rip), %r8 # passagem do conteudo do pointer para r8

    movl $0, %r8d # limpeza do registo que armazenará a soma

    movl $0, %edi
    movq $2, %rdi # divisor para edi
    
    movl num(%rip), %esi # tamanho do array
    
    movl $0, %r9d # contador do numero de iteracoes
    # incl %r9d # incrementa por conta da ultima

    jmp loop

loop:
    movl (%r8), %eax # passagem do dividendo para o registo devido

    cmpl %r9d, %esi
    je end

    # cdqe # prep do dividendo
    cqo
    idivq %rdi # divisao

    cmpq $0, %rdx # comparacao resto
    je evenNum # se 0, vai para a func
    
    jmp nextIteration


evenNum:
    addl (%r8), %r8d
    jmp nextIteration

nextIteration:
    incl %r9d
    addq $4, %r8
    jmp loop

end:
    movl %r8d, %eax
    ret
