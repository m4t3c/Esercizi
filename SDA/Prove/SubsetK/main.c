#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

void SubsetKRec(int n, int k, bool* vcurr, int* nsol, int i, int cnt) {
		/*for (int j = 0; j < n; ++j) {
			if (vcurr[j]) {
				cnt++;
			}
		}
		*/
	if (cnt == k) {
		(*nsol)++;
		printf("{ ");
		for (int j = 0; j < i; ++j) {
			if (vcurr[i]) {
				printf("%d ", (j + 1));
			}
		}
		printf("} ");
		return;
	}

	if (i == n) {
		return;
	}

	vcurr[i] = 1;
	SubsetKRec(n, k, vcurr, nsol, i + 1, cnt + i);

	vcurr[i] = 0;
	SubsetKRec(n, k, vcurr, nsol, i + 1, cnt);

}

int SubsetK(int n, int k) {
	int nsol = 0;
	bool* vcurr = malloc(n * sizeof(bool));
	int cnt = 0;
	SubsetKRec(n, k, vcurr, &nsol, 0, cnt);

	free(vcurr);
	return nsol;
}

int main(void) {
	SubsetK(4, 2);
	return 0;
}