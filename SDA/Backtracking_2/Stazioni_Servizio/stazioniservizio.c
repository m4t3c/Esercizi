#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void StazioniServizioRec(double m, const double* d, const double* p, size_t n, size_t i, double l_rimasti, double spesa, double* spesa_min, bool* vcurr, bool* vbest, const double* diff) {
	if (i == n) {
		if (l_rimasti - (0.05 * *diff) < 0) {
			return;
		}
		if (*spesa_min == 0 || spesa < *spesa_min) {
			*spesa_min = spesa;
			vbest = memcpy(vbest, vcurr, n * sizeof(bool));
		}
		return;
	}

	l_rimasti -= (0.05 * d[i]);
	if (i + 1 <= n && l_rimasti - (0.05 * d[i + 1]) > 0) {
		vcurr[i] = false;
		StazioniServizioRec(m, d, p, n, i + 1, l_rimasti, spesa, spesa_min, vcurr, vbest, diff);
	}

	spesa += p[i] * (30 - l_rimasti);
	l_rimasti = 30;
	vcurr[i] = true;
	StazioniServizioRec(m, d, p, n, i + 1, l_rimasti, spesa, spesa_min, vcurr, vbest, diff);

}

void StazioniServizio(double m, const double* d, const double* p, size_t n) {
	
	double l_rimasti = 30;
	double spesa = 0;
	double spesa_min = 0;
	bool* vcurr = calloc(n, sizeof(bool));
	bool* vbest = calloc(n, sizeof(bool));
	double diff = m;
	double tmp = 0;
	for (size_t i = 0; i < n; ++i) {
		tmp += d[i];
	}
	diff -= tmp;
	StazioniServizioRec(m, d, p, n, 0, l_rimasti, spesa, &spesa_min, vcurr, vbest, &diff);

	if (spesa_min == 0) {
		free(vcurr);
		free(vbest);
		printf("Non esistono soluzioni");
		return;
	}

	for (size_t j = 0; j < n; ++j) {
		if (vbest[j]) {
			printf(" %zu", j);
		}
	}
	printf("\n Spesa Totale: %lf euro", spesa_min);
	free(vcurr);
	free(vbest);
}