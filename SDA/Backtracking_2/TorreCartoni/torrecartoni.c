#include <stdbool.h>
#include <string.h>
#include <stdio.h>

#include "torrecartoni.h"

static void TorreCartoniRec(const Cartone* c, int n, int i, int peso_curr, int altezza_curr, int* altezza_best,
	int* vcurr, int* vbest, bool* pacchi_presi, int cnt, int* cnt_best) {

	if (altezza_curr > *altezza_best) {
		*altezza_best = altezza_curr;
		*cnt_best = cnt;
		memcpy(vbest, vcurr, n * sizeof(int));
	}
	if (i == n) {
		return;
	}

	for (int j = 0; j < n; ++j) {
		if ((int)c[j].l >= peso_curr && !pacchi_presi[j]) {
			vcurr[i] = j;
			peso_curr += c[j].p;
			altezza_curr += c[j].a;

			pacchi_presi[j] = true;

			TorreCartoniRec(c, n, i + 1, peso_curr, altezza_curr, altezza_best, vcurr, vbest, pacchi_presi, cnt + 1, cnt_best);
			peso_curr -= c[j].p;
			altezza_curr -= c[j].a;

			pacchi_presi[j] = false;
		}
	}
}

void TorreCartoni(const Cartone* c, size_t n) {
	if (n == 0) {
		return;
	}

	int* vcurr = calloc(n, sizeof(int));
	int* vbest = calloc(n, sizeof(int));
	bool* pacchi_presi = calloc(n, sizeof(bool));

	int altezza = 0;
	int cnt = 0;
	TorreCartoniRec(c, (int)n, 0, 0, 0, &altezza, vcurr, vbest, pacchi_presi, 0, &cnt);

	for (int i = 0; i < cnt; ++i) {
		printf("%d\n", vbest[i]);
	}
	printf("Altezza: %d cm\n", altezza);

	free(pacchi_presi);
	free(vcurr);
	free(vbest);

	return;
}