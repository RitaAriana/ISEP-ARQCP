#include <stdio.h>

int main(){
    int x=5;
    int *xPtr = &x;
    float y = *xPtr + 3;
    int vec[] = {10,11,12,13};
    
    printf("Value of x: %d\n", *xPtr);
    printf("Value of y: %.0f\n", y );

    printf (" Address : %p\n" , &x );
    printf (" Address : %p\n" , &xPtr );

    printf ("Value pointed by xptr: %d\n", *xPtr);

    printf ("Address: %p\n", &vec);

    for(int i=0; i<4;i++){
        printf("Value: %d\n",vec[i]);
    }

    for(int i=0; i<4;i++){
        printf(" Address : %p\n" , &vec[i] );
    }

    return 0;

}