.section .data
    .equ constA, 1
    .equ constB, 1
    
nMax:
    .int 2

.global counter, nMax

.section .text
    .global summation

summation:
    movl counter(%rip), %r8d # mov contador (i) para o devido registo
    movl counter(%rip), %esi # mov contador (i) para o registo usado para calculos
    movl nMax(%rip), %r9d # mov n limite (n) para o devido registo
    movl $constA, %eax # mov constante A para o devido registo
    movl $constB, %r8d # mov constante B para o devido registo
    movl $0, %edi # local de armazenament do somatorio
    jmp myLoop

myLoop:
    cmpl %r8d, %r9d # comparacao para verificar o fim do ciclo
    jl endLoop # enquanto nMax é maior que n


    imul %esi, %esi # i^2 
    imul %eax, %eax # A^2
    imul %r8d, %eax # i^2 * A^2
    movl $0, %edx # Limpar edx para a divisao
    idiv %r8d # (i^2 * A^2) / B

    
    addl %eax, %edi # soma do total da iteração do ciclo para edi
    movl $constA, %eax # mov constante A para o devido registo
    movl $constB, %r8d # mov constante B para o devido registo

    incl %r8d
    jmp myLoop

endLoop:
    movl %edi, %eax
    ret
