#include <stdio.h>
#include "asm.h"

int code = 12; 
int currentSalary = 0;

int main(){

	int newSalary = new_salary();

	printf("New salary is %d€\n", newSalary);

	return 0;
}