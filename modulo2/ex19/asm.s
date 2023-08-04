.section .data
    .global current # short
    .global desired # short

.section .text
    .global needed_time

needed_time:
    movw current(%rip), %cx
    movw desired(%rip), %dx

    cmpw %cx, %dx
	jg increase
	jl decrease
	je noChange

increase:
    subw %cx, %dx
	movl %r8d, %eax
	movl $2, %esi
	mull %esi
    movl $60, %r8d
    mull %r8d
    jmp end

decrease:
    subw %dx, %cx
	movl %ebx, %eax
	movl $3, %esi
	mull %esi
    movl $60, %r8d
    mull %r8d
    jmp end

noChange:
    movl $0, %eax
    jmp end

end:
    ret

