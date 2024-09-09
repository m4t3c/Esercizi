
unsigned long long FattorialeRec(int n) {

	if (n == 0 || n == 1) {
		return 1;
	}

	return n * FattorialeRec(n - 1);
}

unsigned long long Fattoriale(int n) {

	if (n < 0) {
		return 0;
	}

	return FattorialeRec(n);
}