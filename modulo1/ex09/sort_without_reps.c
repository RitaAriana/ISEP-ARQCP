#include "array_sort2.h"

int sort_without_reps(int *src, int n, int *dest){

    if(n<=0){
        return 0;
    }

    int vec[n];

    for (int i=0; i<n;i++){
        *(vec+i)=*(src+i);
    }

    array_sort2(vec,n);

    int temp=1;
    *(dest)=*(vec);
    for(int i=1; i<n; i++){
        if(*(vec+i)!=*(vec+i-1)){
            *(dest+temp)=*(vec+i);
            temp++;
        }
    }

    return temp;


}