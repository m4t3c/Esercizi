double fact(unsigned n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	
	return n * fact(n - 1);
}

double binomialesimmetrico(unsigned int n, unsigned int h, unsigned int k) {

	double res = (fact(n) / (fact(h) * fact(k)));

	return res;
}