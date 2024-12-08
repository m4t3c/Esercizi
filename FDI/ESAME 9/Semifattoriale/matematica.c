double semifattorialeRec(char n) {

	if (n == 0 || n == 1) {
		return 1;
	}

	return n * semifattorialeRec(n - 2);
}

double semifattoriale(char n) {
	if (n < 0) {
		return -1;
	}

	double res = semifattorialeRec(n);

	return res;
}