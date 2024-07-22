
static void MinimoRec(const int* v, int v_size, int* min) {

	if (v_size == 0) {
		return;
	}

	if (*min > v[v_size - 1]) {
		*min = v[v_size - 1];
	}

	MinimoRec(v, v_size - 1, min);

}

int Minimo(const int* v, int v_size) {

	if (v_size == 1) {
		return v[0];
	}
	int min = v[v_size - 1];
	MinimoRec(v, v_size - 1, &min);
	return min;

}