#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void BabboNataleRec(const int* pacchi, size_t pacchi_size, int p, unsigned int i, bool* vcurr, bool* vbest, int max, int cnt, int sum) {
	
	if (i == pacchi_size) {
		if (sum > p) {
			return;
		}
		if (cnt > max && sum <= p) {
			max = cnt;
			memcpy(vbest, vcurr, pacchi_size * sizeof(bool));
		}
		return;
	}
	
	vcurr[i] = 0;
	BabboNataleRec(pacchi, pacchi_size, p, i + 1, vcurr, vbest, max, cnt, sum);

	vcurr[i] = 1;
	BabboNataleRec(pacchi, pacchi_size, p, i + 1, vcurr, vbest, max, cnt + 1, sum + pacchi[i]);

}

void BabboNatale(const int* pacchi, size_t pacchi_size, int p) {
	bool* vcurr = malloc(pacchi_size * sizeof(bool));
	bool* vbest = malloc(pacchi_size * sizeof(bool));
	unsigned int i = 0;
	int max = 0;
	int cnt = 0;
	int sum = 0;
	
	BabboNataleRec(pacchi, pacchi_size, p, i, vcurr, vbest, max, cnt, sum);

	free(vcurr);
	
	for (unsigned int j = 0; j < pacchi_size - 1; ++j) {
		if (vbest[j]) {
			printf("1 ");
		}
		else {
			printf("0 ");
		}
	}
	if (vbest[pacchi_size - 1]) {
		printf("1");
	}
	else {
		printf("0");
	}

	free(vbest);

	return;
}