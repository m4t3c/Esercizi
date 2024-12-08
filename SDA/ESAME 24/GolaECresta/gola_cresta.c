#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

static bool Check(size_t n, int* vcurr) {

	for (size_t i = 0; i + 2 < n; ++i) {
		if ((!(vcurr[i] < vcurr[i + 1]) || !(vcurr[i + 1] > vcurr[i + 2])) && (!(vcurr[i] > vcurr[i + 1]) || !(vcurr[i + 1] < vcurr[i + 2]))) {
			return false;
		}
	}

	return true;
}

static void GolaCrestaRec(size_t n, size_t i, int* vcurr) {

	if (i == n) {
		if (Check(n, vcurr)) {
			printf("(");
			for (size_t j = 0; j < n; ++j) {
				if (j == n - 1) {
					printf("%d), ", vcurr[j]);
				}
				else
				{
					printf("%d, ", vcurr[j]);
				}
			}
		}
		return;
	}

	for (size_t j = 0; j < 3; ++j) {
		vcurr[i] = (int)j;
		GolaCrestaRec(n, i + 1, vcurr);
	}
}

void GolaCresta(size_t n) {

	if (n < 3) {
		return;
	}
	
	int* vcurr = calloc(n, sizeof(int));

	GolaCrestaRec(n, 0, vcurr);

	free(vcurr);
}