#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void StazioniServizioRec(double m, const double* d, const double* p, size_t n, int i, double l_rimasti, double spesa, double* spesa_min, bool* vcurr, bool* vbest) {
	if (i == n) {
		if (spesa < *spesa_min || *spesa_min == 0) {
			*spesa_min = spesa;
			memcpy(vbest, vcurr, n * sizeof(int));
		}
		return;
	}

	if (l_rimasti - (0.05 * d[i + 1]) > 0) {
		vcurr[i] = 0;
		l_rimasti -= (0.05 * d[i + 1]);
		StazioniServizioRec(m, d, p, n, i + 1, l_rimasti, spesa, spesa_min, vcurr, vbest);
	}

	vcurr[i] = 1;
	spesa += p[i] * (30 - l_rimasti);
	l_rimasti = 30;
	StazioniServizioRec(m, d, p, n, i + 1, l_rimasti, spesa, spesa_min, vcurr, vbest);

}

void StazioniServizio(double m, const double* d, const double* p, size_t n) {

	double l_rimasti = 30;
	double spesa = 0;
	double spesa_min = 0;
	bool* vcurr = calloc(n, sizeof(int));
	bool* vbest = calloc(n, sizeof(int));
	StazioniServizioRec(m, d, p, n, 0, l_rimasti, spesa, &spesa_min, vcurr, vbest);

	for (int j = 0; j < n; ++j) {
		if (vbest[j]) {
			printf(" %d", j);
		}
	}
	printf("\n Spesa Totale: %lf euro", spesa_min);
	
	return;
}