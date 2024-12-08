

int TempoTrasporto(int n, const int* t, int p) {

	int min_cap = t[0];
	for (int i = 1; i < n - 1; ++i) {
		if (t[i] < min_cap) {
			min_cap = t[i];
		}
	}

	int time = p / min_cap;
	if (p % min_cap != 0) {
		++time;
	}

	return time + (n - 2);
}