#include <stdlib.h>
#include <stdio.h>

static void BacktrackStrModRec(int n, int k, int i, int* vcurr) {

	if (i == k) {
		printf("{");
		for (int j = 0; j < k; ++j) {
			printf("%c", 'a' + vcurr[j]);
		}
		printf("}, ");
		return;
	}

	for (int j = 0; j < n; ++j) {
		vcurr[i] = j;
		BacktrackStrModRec(n, k, i + 1, vcurr);
		vcurr[i] = 0;
	}
}

void BacktrackStrMod(int n, int k) {

	if (n <= 0 || n > 26 || k <= 0) {
		return;
	}

	int* vcurr = calloc((size_t)k, sizeof(int));
	BacktrackStrModRec(n, k, 0, vcurr);
	free(vcurr);
}