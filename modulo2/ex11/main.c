#include "stdio.h"
#include "asm.h"

int op1 = 2;
int op2 = 78;

int main (){

    char result = test_flags();

    if(result==1){
		printf("\nHouve carry e/ou Overflow");
	}else{
		printf("\nNao houve carry nem Overflow");
	}

    return 0;
}