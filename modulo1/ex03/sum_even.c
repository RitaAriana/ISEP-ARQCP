int sum_even(int *p, int num){
    int result=0;
    for(int i=0; i<num ; i++){
        if((*(p+i))%2==0){
            result+=*(p+i);
        }
    }
    return result;
}