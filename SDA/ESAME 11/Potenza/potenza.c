
static int PotenzaRec(int a, int b) {

	if (b == 1) {
		return a;
	}

	return a * PotenzaRec(a, b - 1);
}

int Potenza(int a, int b) {
	if ((a == 0 && b == 0) || (b == 0 && a != 0)) {
		return 1;
	}

	if (a == 0) {
		return 0;
	}

	return PotenzaRec(a, b);
}