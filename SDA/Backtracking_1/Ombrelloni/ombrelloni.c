#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

static void OmbrelloniRec(int k, int n, int i, bool* vcurr, int cnt, int* nsol) {

	if (cnt == k) {
		(*nsol)++;
		printf("%4d)", *nsol);
		for (int j = 0; j < i; ++j) {
			printf(" %d", vcurr[j]);
		}
		for (int j = i; j < n; ++j) {
			printf(" 0");
		}
		printf("\n");
		return;
	}
	if (i == n) {
		return;
	}

	vcurr[i] = false;
	OmbrelloniRec(k, n, i + 1, vcurr, cnt, nsol);

	if (i == 0 || vcurr[i - 1] == false) {
		vcurr[i] = true;
		OmbrelloniRec(k, n, i + 1, vcurr, cnt + 1, nsol);
	}

}

int Ombrelloni(int k, int n) {

	if (k < 0 || n < 0) {
		return 0;
	}

	int nsol = 0;
	bool* vcurr = calloc(n, sizeof(bool));

	OmbrelloniRec(k, n, 0, vcurr, 0, &nsol);
	free(vcurr);

	return  nsol;
}