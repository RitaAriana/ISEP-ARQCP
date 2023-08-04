.section .data
    .global ptr1

.section .text
    .global decrypt

decrypt:
    movl $0, %eax # limpeza de registo para receber pointer
    movl $0, %esi # limpeza de registo esi para registar numero de alteracoes
    movl $0, %r8d # limpeza de registo para acomodar char

    movq ptr1(%rip), %rax # passagem do apontador char para rax

    jmp loop # loop

loop:

    cmpb $0, (%rax) # verificao fim de string
    je end 

    cmpb $' ', (%rax) # verificao espaco
    je nextIteration

    cmpb $'a', (%rax) # verificao a
    je nextIteration

    subb $2, (%rax)
    
    incq %rax
    incl %esi

    jmp loop

nextIteration:
    incq %rax
    jmp loop

end:
    movl %esi, %eax # para mudar o num de alteracoes para o retorno
    ret
