#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void StazioniServizioRec(double m, const double* d, const double* p, size_t n, double s, size_t i, double price, double* price_min, bool* vcurr, bool* vbest) {
	if (i == n - 1) {
		if (price < *price_min && s > 0 || *price_min == 0 && s > 0) {
			*price_min = price;
			memcpy(vbest, vcurr, n * sizeof(bool));
		}
		return;
	}
	
	if (s - (d[i + 1] * 0.05 ) > 0) {
		vcurr[i] = 0;
		StazioniServizioRec(m, d, p, n, s - (0.05 * d[i]), i + 1, price, price_min, vcurr, vbest);
	}
	
	vcurr[i] = 1;
	price = p[i] * (30 - s);
	s = 30;
	StazioniServizioRec(m, d, p, n, s - (0.05 * d[i]), i + 1, price, price_min, vcurr, vbest);

}

void StazioniServizio(double m, const double* d, const double* p, size_t n) {

	double s = 30;
	size_t i = 0;
	double price = 0;
	double price_min = 0;
	bool* vcurr = calloc(n, sizeof(bool));
	bool* vbest = calloc(n, sizeof(bool));

	StazioniServizioRec(m, d, p, n, s, i, price, &price_min, vcurr, vbest);

	return;
}