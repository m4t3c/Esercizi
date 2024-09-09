#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static bool Check(bool* vcurr, int n) {
	int open = 0;
	int closed = 0;
	
	for (int i = 0; i < n; ++i) {
		if (vcurr[i]) {
			++open;
		}
		else
		{
			++closed;
		}

		if (closed > open) {
			return false;
		}
	}

	if (open == closed) {
		return true;
	}
	else
	{
		return false;
	}
}

static void ParentesiRec(int n, int i, int cnt, bool* vcurr, int* nsol) {

	if (cnt == n) {
		if (Check(vcurr, n * 2)) {
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

	bool* vcurr = calloc(n * 2, sizeof(bool));
	int nsol = 0;

	ParentesiRec(n, 0, 0, vcurr, &nsol);

	free(vcurr);
	return nsol;
}