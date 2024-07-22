#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

static bool Check(int* vcurr, int n) {

	bool res = true;
	int count = 0;
	for (int i = 0; i < n; ++i) {
		if (i > 0 && vcurr[i] < vcurr[i - 1]) {
			res = false;
			break;
		}
		if (i > 0 && vcurr[i] == vcurr[i - 1]) {
			++count;
		}
	}
	if (count == 0) {
		res = false;
	}
	return res;
}

static void PasswordRec(int n, int i, int* vcurr, int* nsol) {

	if (i == n) {
		if (Check(vcurr, n)) {
			(*nsol)++;
			printf("%4d) ", *nsol);
			for (int j = 0; j < n; ++j) {
				printf("%d", vcurr[j]);
			}
			printf("\n");
		}
		return;
	}

	for (int j = 0; j <= 9; ++j) {
		vcurr[i] = j;
		PasswordRec(n, i + 1, vcurr, nsol);
	}
}

void Passwords(int n) {

	if (n < 1) {
		return;
	}

	int* vcurr = calloc(n, sizeof(int));
	int nsol = 0;

	PasswordRec(n, 0, vcurr, &nsol);
	free(vcurr);

}