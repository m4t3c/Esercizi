#include <stdlib.h>
#include <stdio.h>

void BacktrackModRec(int n, int k, int i, char* vcurr) {

	if (i == n) {
		printf("{ ");
		for (int j = 0; j < n; ++j) {
			printf("%c", vcurr[j]);
		}
		printf(" }");
		return;
	}

	for (char c = 'a'; c < 'a' + k; ++c) {
		vcurr[i] = c;
		BacktrackModRec(n, k, i + 1, vcurr);
	}
}

void BacktrackMod(int n, int k) {

	if (k <= 0 || k > 26 || n <= 0) {
		return;
	}

	char* vcurr = malloc(n);

	BacktrackModRec(n, k, 0, vcurr);

	free(vcurr);
}