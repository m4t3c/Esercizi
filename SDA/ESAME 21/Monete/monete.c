#include <stdlib.h>
#include <stdio.h>

static void CombinaMoneteRec(int b, int i, int size, const int* m, int sum, int* vsol, int* n_sol) {
	if (sum == b) {
		(*n_sol)++;
		for (int j = 0; j < size; ++j) {
			printf("%d ", vsol[j]);
		}
		printf("\n");
		return;
	}
	if (i == size) {
		return;
	}

	for (int j = 0; j <= b; ++j) {
		vsol[i] = j;
		sum += j * m[i];

		if (sum > b) {
			vsol[i] = 0;
			return;
		}

		CombinaMoneteRec(b, i + 1, size, m, sum, vsol, n_sol);
		
		sum -= j * m[i];
	}
}

int CombinaMonete(int b, const int* m, size_t m_size) {

	int* vsol = calloc(m_size, sizeof(int));
	int n_sol = 0;

	CombinaMoneteRec(b, 0, (int)m_size, m, 0, vsol, &n_sol);

	free(vsol);
	return n_sol;
}