#include <stdlib.h>
#include <stdbool.h>
#include <float.h>
#include <string.h>
#include <stdio.h>

static void StazioniServizioRec(double m, const double* d, const double* p, size_t n, size_t i, bool* vcurr, bool* vbest, double pcurr, double* pbest, const double dmax, double dcurr, double dtot) {

	if (dtot + (dmax - dcurr) >= m) {
		for (size_t j = i; j < n; j++) {
			vcurr[j] = false;
		}

		if (pcurr < *pbest) {
			*pbest = pcurr;
			memcpy(vbest, vcurr, n * sizeof(bool));
		}

		return;
	}
	if (i == n) {
		return;
	}

	dcurr += d[i];
	dtot += d[i];

	if ((i < n - 1) && (dcurr + d[i + 1] <= dmax)) {
		vcurr[i] = false;
		StazioniServizioRec(m, d, p, n, i + 1, vcurr, vbest, pcurr, pbest, dmax, dcurr, dtot);
	}

	vcurr[i] = true;
	pcurr += p[i] * (0.05 * dcurr);
	dcurr = 0;
	StazioniServizioRec(m, d, p, n, i + 1, vcurr, vbest, pcurr, pbest, dmax, dcurr, dtot);
}

void StazioniServizio(double m, const double* d, const double* p, size_t n) {

	const double dmax = 30 / 0.05;
	bool* vcurr = calloc(n, sizeof(bool));
	bool* vbest = calloc(n, sizeof(bool));
	double pbest = DBL_MAX;

	StazioniServizioRec(m, d, p, n, 0, vcurr, vbest, 0, &pbest, dmax, 0, 0);

	if (pbest == DBL_MAX) {
		printf("Non esistono soluzioni");
	}
	else
	{
		for (size_t i = 0; i < n; ++i) {
			if (vbest[i]) {
				printf("%zu ", i);
			}
		}

		printf("\nSpesa totale: %lf euro", pbest);
	}

	free(vcurr);
	free(vbest);
}