#include "torrecartoni.h"

void TorreCartoniRec(const Cartone* c, size_t n, int i, unsigned altezza, unsigned* altezza_max, unsigned peso, int cnt, int* cnt_max, int* vcurr, int* vbest, int* pacchi_presi) {
	for (unsigned j = 0; j < n; ++j) {
		if (pacchi_presi[j] == 0 && peso <= c[j].l) {
			vcurr[i] = j;
			pacchi_presi[j] = 1;
			altezza += c[j].a;
			peso += c[j].p;
			cnt++;

			if (altezza > *altezza_max) {
				*altezza_max = altezza;
				*cnt_max = cnt;
				memcpy(vbest, vcurr, n * sizeof(int));
			}
			if (i < (int)(n - 1)) {
				TorreCartoniRec(c, n, i + 1, altezza, altezza_max, peso, cnt, cnt_max, vcurr, vbest, pacchi_presi);
			}
			pacchi_presi[j] = 0;
			altezza -= c[j].a;
			peso -= c[j].p;
			cnt--;
		}
	}

}

void TorreCartoni(const Cartone* c, size_t n) {
	if (c == NULL || n <= 0) {
		return;
	}

	int i = 0;
	unsigned altezza = 0;
	unsigned altezza_max = 0;
	unsigned peso = 0;
	int cnt = 0;
	int cnt_max = 0;
	int* vcurr = calloc(n, sizeof(int));
	int* vbest = calloc(n, sizeof(int));
	int* pacchi_presi = calloc(n, sizeof(int));

	TorreCartoniRec(c, n, i, altezza, &altezza_max, peso, cnt, &cnt_max, vcurr, vbest, pacchi_presi);

	for (int j = 0; j < cnt_max; ++j) {
		printf("%d\n", vbest[j]);
	}

	printf("Altezza %d cm", altezza_max);

	free(vcurr);
	free(vbest);
	free(pacchi_presi);

}