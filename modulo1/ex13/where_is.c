int where_is (char *str, char c, int *p){
    int j=0;
    for (int i=0;*(str+i) != '\0';i++){
        if(*(str+i) == c){
            *(p+j)=i;
            j++;
        }
    }
    return j;
}