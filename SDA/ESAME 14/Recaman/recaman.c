
static void RecamanRec(int n, int* res, int i) {
	if (i == n) {
		return;
	}

	if (*res % n == 0) {
		*res /= i;
		RecamanRec(n, res, i + 1);
	}
	else
	{
		*res *= i;
		RecamanRec(n, res, i + 1);
	}
}

int Recaman(int n) {

	if (n < 1) {
		return -1;
	}

	int res = 1;

	RecamanRec(n, &res, 1);

	return res;
}