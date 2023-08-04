#include <stdio.h>

void fill_array(int vector[]){
	int index = 0;

	while(index<30){
		printf("Enter a value for the index %d of the array: \n", index);
		int input;
		scanf("%d", &input);
		vector[index] = input;
		index++;
	}
}