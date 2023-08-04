#include <stdio.h>
#include "asm.h"

int* ptrvec;
short num = 10;

int main(){
	
	int soma;
	
    int array[] = {13,12,45,500,59,70,1,38,11,255};
    ptrvec = array;
    
    sum = vec_sum();	
    avg = vec_avg();

	printf("Sum: %d\n", sum);
    printf("Avg: %d\n", avg);

  return 0;
}