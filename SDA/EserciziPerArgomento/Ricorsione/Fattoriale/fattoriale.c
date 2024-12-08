
double FattorialeRec(int n) {

	if (n == 0) {
		return 1;
	}

	return n * FattorialeRec(n - 1);
}

double Fattoriale(int n) {
	
	if (n < 0) {
		return -1;
	}

	return FattorialeRec(n);
}