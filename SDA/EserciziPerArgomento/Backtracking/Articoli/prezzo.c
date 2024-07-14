#include "prezzo.h"
#include <stdbool.h>
#include <stdio.h>

static void TrovaArticoliRec(const struct Articolo* a, size_t a_size, int sum, int i, bool* vcurr, int sum_curr) {

	if (sum_curr == sum) {
		for (size_t j = 0; j < i; ++j) {
			if (vcurr[j]) {
				printf("%s, ", a[j].nome);
			}
		}
		printf("\n");
		return;
	}
	if (i == a_size) {
		return;
	}

	TrovaArticoliRec(a, a_size, sum, i + 1, vcurr, sum_curr);

	if (sum_curr + a[i].prezzo <= sum) {
		sum_curr += a[i].prezzo;
		vcurr[i] = true;
		TrovaArticoliRec(a, a_size, sum, i + 1, vcurr, sum_curr);
		sum_curr -= a[i].prezzo;
		vcurr[i] = false;
	}
}

void TrovaArticoli(const struct Articolo* a, size_t a_size, int sum) {

	if (a == NULL || a_size == 0) {
		return;
	}

	bool* vcurr = calloc(a_size, sizeof(bool));
	
	TrovaArticoliRec(a, a_size, sum, 0, vcurr, 0);

	free(vcurr);
}