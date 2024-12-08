#include "torrecartoni.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

static void TorreCartoniRec(const Cartone* c, int n, int i, int* vcurr, int* vbest, int cnt, int* cnt_best, int altezza, int* altezza_max, int peso_curr, bool* pacchi_presi) {
	if (altezza > *altezza_max) {
		*altezza_max = altezza;
		*cnt_best = cnt;
		memcpy(vbest, vcurr, n * sizeof(int));
	}
	if (i == n) {
		return;
	}

	for (int j = 0; j < n; ++j) {
		if ((int)c[j].l > peso_curr && !pacchi_presi[j]) {
			vcurr[i] = j;
			peso_curr += c[j].p;
			altezza += c[j].a;

			pacchi_presi[j] = true;

			TorreCartoniRec(c, n, i + 1, vcurr, vbest, cnt + 1, cnt_best, altezza, altezza_max, peso_curr, pacchi_presi);

			peso_curr -= c[j].p;
			altezza -= c[j].a;
			pacchi_presi[j] = false;
		}
	}
}

void TorreCartoni(const Cartone* c, size_t n) {

	int* vcurr = calloc(n, sizeof(int));
	int* vbest = calloc(n, sizeof(int));
	bool* pacchi_presi = calloc(n, sizeof(bool));
	int cnt = 0;
	int altezza_max = 0;

	TorreCartoniRec(c, (int)n, 0, vcurr, vbest, 0, &cnt, 0, &altezza_max, 0, pacchi_presi);

	for (int i = 0; i < cnt; ++i) {
		printf("%d\n", vbest[i]);
	}
	printf("Altezza: %d cm\n", altezza_max);

	free(vcurr);
	free(vbest);
	free(pacchi_presi);

	return;
}