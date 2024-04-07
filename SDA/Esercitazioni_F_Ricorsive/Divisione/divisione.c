int DivisioneRec(int a, int b, int i) {
	if (b > a) {
		return i;
	}
	++i;
	return DivisioneRec(a - b, b, i);
}

int Divisione(int a, int b) {
	if (a < 0 || b < 0) {
		return -1;
	}
	if (a == 0 || b > a) {
		return 0;
	}
	if (b == 0) {
		return -1;
	}
	
	int i = 0;

	return DivisioneRec(a, b, i);
}