#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

static bool ParentesiCheck(int n, int* vcurr) {
	int open = 0;
	int close = 0;

	for (int i = 0; i < n; ++i) {
		if (vcurr[i]) {
			++open;
		}
		else
		{
			++close;
		}
		if (close > open) {
			return false;
		}
	}

	if (open == close) {
		return true;
	}
	else
	{
		return false;
	}

}

static void ParentesiRec(int n, int i, int cnt, int* vcurr, int* nsol) {
	if (cnt == n) {
		if (ParentesiCheck(n * 2, vcurr)) {
			(*nsol)++;
			for (int j = 0; j < n * 2; ++j) {
				if (vcurr[j]) {
					printf("(");
				}
				else
				{
					printf(")");
				}
			}
			printf("\n");
		}
		return;
	}
	if (i == n * 2) {
		return;
	}

	vcurr[i] = 1;
	ParentesiRec(n, i + 1, cnt + 1, vcurr, nsol);
	vcurr[i] = 0;
	ParentesiRec(n, i + 1, cnt, vcurr, nsol);
}

int Parentesi(int n) {
	if (n < 0) {
		return -1;
	}

	if (n == 0) {
		return 0;
	}

	int* vcurr = calloc(n * 2, sizeof(int));
	int n_sol = 0;

	ParentesiRec(n, 0, 0, vcurr, &n_sol);
	free(vcurr);

	return n_sol;
}