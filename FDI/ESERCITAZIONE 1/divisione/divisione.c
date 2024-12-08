int divisione(double a, double b, double* q) {

	if (b == 0) {
		return 0;
	}

	double r = a / b;
	*q = r;

	return 1;
}