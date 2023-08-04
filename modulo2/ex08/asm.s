.section .data
s1:
    .short 0

s2:
    .short 1

.global s1, s2

.section .text
    .global crossSumBytes

crossSumBytes:
    movw s1(%rip),%ax
    movw s2(%rip),%cx
    addb %dl, %ah
    addb %ch, %al
