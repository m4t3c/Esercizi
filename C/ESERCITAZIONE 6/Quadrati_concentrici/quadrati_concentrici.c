#include <stdlib.h>
#include <stdio.h>
#include <math.h>

extern void stampa_quadrati_concentrici(int n) {

	int lato = n + n - 1;
	for (int r = 0; r < lato; ++r) {
		int dr = abs(r - (n - 1));
		for (int c = 0; c < lato; ++c) {

			int dc = abs(c - (n - 1));
			int d = dr > dc ? dr : dc;

			printf("%i ", (d + 1) % 10);
		}
		printf("\n");
	}
}