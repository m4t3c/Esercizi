unsigned int somma_cifre(unsigned int x) {

	unsigned int res = 0;
	
	while (x != 0) {
		res += x % 10;
		x /= 10;
	}

	return res;
}