.section .data
    .global A
    .global B
    .global C
    .global D

.section .text
    .global sum_and_subtract

sum_and_subtract:
    movslq C(%rip), %rax
    movsbq A(%rip), %rcx
    addq %rcx, %rax
    movslq D(%rip), %rcx
    subq %rcx,%rax
    movswq B(%rip), %rcx
    addq %rcx, %rax
    ret
    
