.section .data
    .global s1
    .global s2

.section .text
    .global crossSumBytes

crossSumBytes:
    movw s1(%rip),%ax
    movw s2(%rip),%cx
    addb %dl, %ah
    addb %ch, %al
