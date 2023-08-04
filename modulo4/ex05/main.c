#include <stdio.h>
#include "asm.h"

int main(){

  int n = 5;
  int *v1 = &n;
  int v2 = 5;

  int resultado = inc_and_square(v1,v2);
  printf("Square: %d", resultado);
  printf("\nInc: %d", *v1);

  return 0;
}