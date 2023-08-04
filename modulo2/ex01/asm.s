.section .data
 .global op1
 .global op2
 .global res

.section .text
 .global sum # void sum(void)
 sum:
  movl op1(%rip), %r8d # place op1 in r8d
  movl op2(%rip), %eax # place op2 in eax
  addl %r8d, %eax # add r8d to eax. Result is in eax
  movl %eax, res(%rip) # copy the result to res
  ret
