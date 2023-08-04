.section .data
    .global s

.section .text
    .global swapBytes
swapBytes:
    movw s(%rip),%cx
    movb %dl, %ah
    movb %ch, %al
    ret
