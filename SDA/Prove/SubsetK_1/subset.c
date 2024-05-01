#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

void SubsetKRec(int n, int k, bool* vcurr, int i, int* nsol, int cnt) {
	

	if (cnt == k) {
		(*nsol)++;
		printf("{ ");
		for (int j = 0; j < i; ++j) {
			if (vcurr[j]) {
				printf("%d ", j);
			}
		}
		printf("}, ");

		return;
	}

	if (i == n) {
		return;
	}

	vcurr[i] = 0;
	SubsetKRec(n, k, vcurr, i + 1, nsol, cnt);

	vcurr[i] = 1;
	SubsetKRec(n, k, vcurr, i + 1, nsol, cnt + 1);

}

extern int SubsetK(int n, int k) {

	bool* vcurr = calloc(n, sizeof(bool));
	int nsol = 0;
	SubsetKRec(n, k, vcurr, 0, &nsol, 0);

	return nsol;
}

int main(void) {
	SubsetK(4, 2);

	return 0;
}