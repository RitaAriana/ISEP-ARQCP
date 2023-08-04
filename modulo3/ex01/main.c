#include <stdio.h>
#include "asm.h"

char vec[6] = {'0','R','i','t','a','0'};
char  *ptr1=vec;

int main(){
    
    int result = zero_count();

	printf("Resposta: %d\n", result);
  return 0;
}