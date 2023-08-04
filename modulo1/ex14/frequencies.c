void frequencies(float *grades, int n, int *freq){
    for(int index = 0; index < n; index++){
        int num= (int) *grades;
        *(freq + num) += 1;
        grades++;
    }
}