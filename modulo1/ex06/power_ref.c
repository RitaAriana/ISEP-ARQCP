void power_ref(int *x, int y){
    if(x == 0 || y<0){
        *x = 0;
        return;
    }

    if(y == 0){
        *x = 1;
        return;
    }

    int aux = *x;
    for(int i = 1; i<y; i++){
        *x *= aux;
    }
}