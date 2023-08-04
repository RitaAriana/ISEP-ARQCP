#include <stdio.h>
#include "asm.h"

int main(){

  int a = 18, b = 15, c = 22;
  int result = greatest(a,b,c);

  printf("Greatest: %d", result);

  return 0;
}