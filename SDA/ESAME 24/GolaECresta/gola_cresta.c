#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

static bool Check(int* vcurr, int n) {
	for (int i = 0; i+ 2 < n; ++i) {
		if (!(vcurr[i] < vcurr[i + 1] && vcurr[i + 1] > vcurr[i + 2]) && !(vcurr[i] > vcurr[i +1] && vcurr[i + 1] < vcurr[i + 2])) {
			return false;
		}
	}

	return true;
}


static void GolaCrestaRec(int n, int i, int* vcurr) {
	if (i == n) {
		if (Check(vcurr, n)) {
			printf("(");
			for (int j = 0; j < n; ++j) {
				if (j == n - 1) {
				printf("%d", vcurr[j]);
				break;
			}
			printf("%d, ", vcurr[j]);
			}
			printf("), ");
		}
		return;
	}

	for (int k = 0; k < 3; ++k) {
		vcurr[i] = k;
		GolaCrestaRec(n, i + 1, vcurr);
	}
}

void GolaCresta(size_t n) {

	if (n < 3) {
		return;
	}

	int* vcurr = calloc(n, sizeof(int));
	
	GolaCrestaRec((int)n, 0, vcurr);
	free(vcurr);
}