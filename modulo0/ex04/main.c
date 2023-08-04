#include <stdio.h>
#include "methodHeader.h"

int main(){	
	
	int n = 10; //size
	
	int vector[n];
	
	fill_array(vector, n);
	
	int value = 3;
			
	printf("The number of times the given number appears on the array is: %d\n", count(vector, n, value));
	
	return 0;

}