int count(int vector[], int n, int value){
	int numVezes = 0;
	for(int i = 0; i<n; i++){
		if(vector[i] == value)
			numVezes++;
	}
	return numVezes;
}