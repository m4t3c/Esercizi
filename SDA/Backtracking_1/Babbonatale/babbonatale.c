#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

static void BabboNataleRec(const int* pacchi, size_t pacchi_size, int p, size_t i, bool* vcurr, bool* vbest, int* max, int cnt, int sum) {

	if (i == pacchi_size) {
		if (cnt >= *max) {
			*max = cnt;
			memcpy(vbest, vcurr, pacchi_size);
		}
		return;
	}

	if (sum + pacchi[i] < p) {
		vcurr[i] = true;
		BabboNataleRec(pacchi, pacchi_size, p, i + 1, vcurr, vbest, max, cnt + 1, sum + pacchi[i]);
	}
	vcurr[i] = false;
	BabboNataleRec(pacchi, pacchi_size, p, i + 1, vcurr, vbest, max, cnt, sum);
}

void BabboNatale(const int* pacchi, size_t pacchi_size, int p) {

	bool* vcurr = calloc(pacchi_size, sizeof(bool));
	bool* vbest = calloc(pacchi_size, sizeof(bool));
	int max = 0;

	BabboNataleRec(pacchi, pacchi_size, p, 0, vcurr, vbest, &max, 0, 0);
	size_t i = 0;
	for (; i < pacchi_size - 1; ++i) {
		if (vbest[i]) {
			printf("1 ");
		}
		else
		{
			printf("0 ");
		}
	}
	if (vbest[i]) {
		printf("1");
	}
	else
	{
		printf("0");
	}

	free(vcurr);
	free(vbest);

	return;
}