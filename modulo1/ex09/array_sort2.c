void array_sort2(int *vec, int n){
    for (int i=0; i<(n-1); i++){
        for (int j=(i+1); j<n; j++){
            if(*(vec+i) > *(vec+j)){
                int aux = *(vec + i);
                *(vec + i) = *(vec+j);
                *(vec+j) = aux;
            }
        }
    }
}