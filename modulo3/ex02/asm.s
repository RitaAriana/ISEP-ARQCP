.section .data
    .global ptr1
    .global ptr2

.section .text
    .global str_copy_porto

str_copy_porto:
    movq ptr1(%rip), %rax 
    movq ptr2(%rip), %rcx 
    
    jmp loop 

loop:
    movb (%rax), %dl
    movb %dl, (%rcx)
    
    cmpb $0, (%rcx)
    je end 

    cmpb $'v', (%rcx)
    je changeLetter 
    
    jmp nextIteration

changeLetter:
    movb $'b', (%rcx)
    jmp nextIteration

nextIteration:
    incq %rax
    incq %rcx
    jmp loop

end:
    ret    
