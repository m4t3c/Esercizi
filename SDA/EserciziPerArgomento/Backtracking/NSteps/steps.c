#include <stdio.h>
#include <stdlib.h>

static void StepsRec(int n, int i, int* vcurr, int* nsol) {

	if (n == 0) {
		printf("[");
		for (int j = 0; j < i - 1; ++j) {
			printf("%i, ", vcurr[j]);
		}
		printf("%i], ", vcurr[i - 1]);
		(*nsol)++;
		return;
	}

	for (int j = 1; j <= 3; ++j) {
		if (n >= j) {
			vcurr[i] = j;
			StepsRec(n - j, i + 1, vcurr, nsol);
		}
	}
}

int Steps(int n) {
	if (n <= 0) {
		return 0;
	}

	int* vcurr = malloc(n * sizeof(int));
	int nsol = 0;

	StepsRec(n, 0, vcurr, &nsol);
	free(vcurr);

	return nsol;
}