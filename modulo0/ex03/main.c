#include <stdio.h>
#include "fill_array.h"

int main(){
	
	int tamanho = 30;
	
	int vector[tamanho];
	
	fill_array(vector);
	
	int total = 0;
	
	for(int i = 0; i<tamanho; i++){
		total += vector[i];
	}
	
	float media = total/tamanho;
	
	printf("A média dos valores inseridos é %.2f\n", media); 
	
	return 0;
}