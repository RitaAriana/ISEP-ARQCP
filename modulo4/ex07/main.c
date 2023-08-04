#include <stdio.h>
#include "asm.h"

int main(){

  short vetor[] = {9,3,9,2,1,3,5,2,2};
  short *vec = vetor;
  int n = 9;

  int res = count_even(vec,n);

  printf("Even: %d", res);

  return 0;
}