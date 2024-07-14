static int RecamanRec(int n, int i, int an) {
	if (i == n) {
		return an;
	}

	if (an % i == 0) {
		return RecamanRec(n, i + 1, an / i);
	}
	else
	{
		return RecamanRec(n, i + 1, i * an);
	}
}

int Recaman(int n) {
	if (n < 1) {
		return -1;
	}

	return RecamanRec(n, 1, 1);
}