#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void stampa_quadrati_concentrici(int n) {

	int l = n + n - 1;
	for (int r = 0; r < l; ++r) {
		int dr = abs(r - (n - 1));
		for (int c = 0; c < l; ++c) {
			int dc = abs(c - (n - 1));
			int d = dr > dc ? dr : dc;

			printf("%i ", (d + 1) % 10);
		}
		printf("\n");
	}
}