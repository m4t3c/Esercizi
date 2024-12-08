#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void SubsetEqualRec(int n, int s, int i, bool* vcurr, int sum_curr, int* nsol) {
	if (sum_curr == s) {
		printf("{ ");
		for (int j = 1; j <= n; ++j) {
			if (vcurr[j]) {
				printf("%i ", j);
			}
		}
		printf("} ");
		return;
	}
	if (i > n) {
		return;
	}

	for (int e = i; e <= n; ++e) {
		if (sum_curr + e <= s) {
			vcurr[e] = true;
			SubsetEqualRec(n, s, e + 1, vcurr, sum_curr + e, nsol);
			vcurr[e] = false;
		}
	}
}

int SubsetEqual(int n, int s) {
	if (n <= 0 || s <= 0) {
		return 0;
	}

	bool* vcurr = calloc(n + 1, sizeof(bool));
	int nsol = 0;
	SubsetEqualRec(n, s, 1, vcurr, 0, &nsol);

	return nsol;
}