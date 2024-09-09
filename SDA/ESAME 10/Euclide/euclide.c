
static int MCDRec(int m, int n) {

	if (n == 0) {
		return m;
	}

	return MCDRec(n, m % n);
}

int MCD(int m, int n) {

	if (m < n) {
		return MCDRec(n, m);
	}
	else
	{
		return MCDRec(m, n);
	}
}