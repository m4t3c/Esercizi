
double fattoriale(double n) {
	
	if (n == 0) {
		return 1;
	}

	double res = 1;

	while (n > 1) {
		res *= n;
		--n;
	}

	return res;
}

double binomiale(unsigned int n, unsigned int k) {

	if (n == 0 || k > n) {
		return -1;
	}

	double num = fattoriale(n);
	double den = fattoriale(k) * fattoriale(n - k);
	double res = num / den;

	return res;
}