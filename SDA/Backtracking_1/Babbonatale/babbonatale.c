#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void BabboNataleRec(const int* pacchi, size_t pacchi_size, int p, unsigned int i, bool* vcurr, bool* vbest, int* max, int cnt, int sum) {

	if (i == pacchi_size) {
		if (sum > p) {
			return;
		}
		else
		{
			if (cnt > *max) {
				*max = cnt;
				memcpy(vbest, vcurr, pacchi_size * sizeof(bool));
			}
		}
		return;
	}

	vcurr[i] = 0;
	BabboNataleRec(pacchi, pacchi_size, p, i + 1, vcurr, vbest, max, cnt, sum);
	if (sum + pacchi[i] < p) {
		vcurr[i] = 1;
		BabboNataleRec(pacchi, pacchi_size, p, i + 1, vcurr, vbest, max, cnt + 1, sum + pacchi[i]);
	}

}

void BabboNatale(const int* pacchi, size_t pacchi_size, int p) {
	bool* vcurr = malloc(pacchi_size * sizeof(bool));
	bool* vbest = malloc(pacchi_size * sizeof(bool));
	int max = 0;

	BabboNataleRec(pacchi, pacchi_size, p, 0, vcurr, vbest, &max, 0, 0);

	for (size_t i = 0; i < pacchi_size; ++i) {
		if (vbest[i]) {
			printf("1 ");
		}
		else
		{
			printf("0 ");
		}
	}

	free(vcurr);
	free(vbest);
}