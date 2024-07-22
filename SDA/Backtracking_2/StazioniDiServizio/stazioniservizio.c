#include <stdlib.h>
#include <float.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

static void StazioniServizioRec(double m, const double* d, const double* p, size_t n, size_t i, double dist_tot, double dist_curr,
	const double dist_max, bool* vcurr, bool* vbest, double p_curr, double* p_best) {

	if (dist_tot + (dist_max - dist_curr) >= m) {
		for (size_t j = i; i < n; ++i) {
			vcurr[j] = false;
		}

		if (p_curr < *p_best) {
			memcpy(vbest, vcurr, n * sizeof(bool));
			*p_best = p_curr;
		}
		return;
	}
	if (i == n) {
		return;
	}

	dist_curr += d[i];
	dist_tot += d[i];

	if (dist_max < dist_curr) {
		return;
	}

	if ((i < n - 1) && (dist_curr + d[i + 1] <= dist_max)) {
		vcurr[i] = false;
		StazioniServizioRec(m, d, p, n, i + 1, dist_tot, dist_curr, dist_max, vcurr, vbest, p_curr, p_best);
	}

	vcurr[i] = true;
	p_curr += p[i] * 0.05 * dist_curr;
	dist_curr = 0;
	StazioniServizioRec(m, d, p, n, i + 1, dist_tot, dist_curr, dist_max, vcurr, vbest, p_curr, p_best);

}

void StazioniServizio(double m, const double* d, const double* p, size_t n) {

	double dist_tot = 0;
	double dist_curr = 0;
	const double dist_max = 30 / 0.05;

	bool* vcurr = malloc(n * sizeof(int));
	bool* vbest = malloc(n * sizeof(int));

	double p_curr = 0;
	double p_best = DBL_MAX;

	StazioniServizioRec(m, d, p, n, 0, dist_tot, dist_curr, dist_max, vcurr, vbest, p_curr, &p_best);

	if (p_best == DBL_MAX) {
		printf("Non esistono soluzioni");
	}
	else
	{
		for (size_t j = 0; j < n; ++j) {
			if (vbest[j]) {
				printf("%zu ", j);
			}
		}

		printf("\nSpesa totale: %lf euro", p_best);
	}

	free(vcurr);
	free(vbest);
}
