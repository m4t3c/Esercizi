unsigned TrailingZeros(unsigned n) {

	if (n == 0) {
		return 0;
	}

	n /= 2;
	return n + TrailingZeros(n);
}

//Sfrutto il fatto che se 2^i è > di n allora n/2^i = 0