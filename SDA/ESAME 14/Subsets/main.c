#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static void SubsetEqualRec(int n, int i, int s, int sum_curr, bool* vcurr) {

	if (sum_curr == s) {
		printf("{ ");
		for (size_t j = 0; j < n; ++j) {
			if (vcurr[j]) {
				printf("%zu ", (j + 1));
			}
		}
		printf("}, ");
		return;
	}
	if (i == n) {
		return;
	}

	if (sum_curr + (i + 1) <= s) {
		vcurr[i] = true;
		SubsetEqualRec(n, i + 1, s, sum_curr + (i + 1), vcurr);
	}
	vcurr[i] = false;
	SubsetEqualRec(n, i + 1, s, sum_curr, vcurr);
}

void SubsetEqual(int n, int s) {

	if (n <= 0 || s <= 0) {
		return;
	}

	bool* vcurr = calloc(n, sizeof(bool));
	SubsetEqualRec(n, 0, s, 0, vcurr);
	free(vcurr);

	return;
}