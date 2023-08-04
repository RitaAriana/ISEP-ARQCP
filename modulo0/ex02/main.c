#include <stdio.h>
#include "sum.h"

int main(){
	int a = 1;
	int b = 1;
	int finalResult = 0;
	
	do{
		finalResult += sum(a,b);
		printf("The result of the sum is %d.\n", finalResult);
	} while(finalResult < 10);
	
	return 0;
}	