#include <stdio.h>

void fill_array(int vector[], int tamanho){
	
	int index = 0;

	while(index<tamanho){
		printf("Enter a value for the index %d of the array: \n", index);
		int input;
		scanf("%d", &input);
		vector[index] = input;
		index++;
	}
}