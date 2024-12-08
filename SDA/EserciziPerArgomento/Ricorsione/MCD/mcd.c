int MCD(int m, int n) {
	if (n == 0) {
		return m;
	}

	if (m == 0) {
		return n;
	}

	if (m >= n) {
		return MCD(n, m % n);
	}
	else
	{
		return MCD(m, n % m);
	}
}