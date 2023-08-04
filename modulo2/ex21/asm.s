.section .data
	.global code
	.global currentSalary


.section .text
    .global new_salary

new_salary:
    movl code(%rip),%edx
    movl currentSalary(%rip),%eax

    cmp $10, %edx
	je jmp_Manager
	
	cmp $11, %edx
	je jmp_Engineer
	
	cmp $12, %edx
	je jmp_Technician

    addl $100,%eax
    jmp end

jmp_Manager:
    addl $300,%eax
    jmp end

jmp_Engineer:
    addl $250,%eax
    jmp end

jmp_Technician:
    addl $150,%eax
    jmp end

end:
    ret
