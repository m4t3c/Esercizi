#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

void SubsetKRec(int n, int k, bool* vcurr, int i, int* nsol) {
	
	if (i == n) {
		int cnt;
		for (int j = 0; j < n; ++j) {
			if (vcurr[j] == true) {
				cnt++;
			}
		}

		if (cnt == k) {
			(*nsol)++;
			printf("{ ");
			for (int j = 0; j < n; ++j) {
				if (vcurr[j]) {
					prinf("%d", j);
				}
			}
			printf("}, ");
		}
	}

	vcurr[i] = 0;
	SubsetKRec(n, k, vcurr, i + 1, nsol);
	
	vcurr[i] = 1;
	SubsetKRec(n, k, vcurr, i + 1, nsol);

}

extern int SubsetK(int n, int k) {

	bool* vcurr = calloc(n, sizeof(bool));
	int nsol = 0;
	SubsetKRec(n, k, vcurr, 0, &nsol);

	return nsol;
}

int main(void) {
	SubsetK(4, 2);

	return 0;
}