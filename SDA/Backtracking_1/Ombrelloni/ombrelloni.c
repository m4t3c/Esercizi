#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void OmbrelloniRec(int k, int n, int i, bool* vcurr, int cnt, int* nsol) {

	if (cnt == k) {
		(*nsol)++;
		printf("%4d)", *nsol);
		for (int j = 0; j < i; ++j) {
			printf(" %d", vcurr[j]);
		}

		for (int l = i; l < n; ++l) {
			printf(" 0");
		}
		printf("\n");
		return;
	}
	if (i == n) {
		return;
	}

	vcurr[i] = 0;
	OmbrelloniRec(k, n, i + 1, vcurr, cnt, nsol);

	if (i == 0 || !vcurr[i - 1]) {
		vcurr[i] = 1;
		OmbrelloniRec(k, n, i + 1, vcurr, cnt + 1, nsol);
	}
}

int Ombrelloni(int k, int n) {

	if (k < 0 || n < 0) {
		return 0;
	}

	bool* vcurr = malloc(n * sizeof(bool));
	int nsol = 0;

	OmbrelloniRec(k, n, 0, vcurr, 0, &nsol);
	free(vcurr);

	return nsol;
}