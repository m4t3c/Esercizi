#include "colormap.h"
#include <stdbool.h>
#include <stdio.h>

static bool Contrains(const struct SquareMatrix* m, int i, const char* vcurr, char color) {
	int r = i;

	for (int c = 0; c < i; ++c) {
		if (m->data[r * m->side + c] && color == vcurr[c]) {
			return false;
		}
	}

	return true;
}

static void ColorMapRec(const struct SquareMatrix* m, const char* c, char* vcurr, int i, int* nsol) {
	if (i == (int)m->side) {
		for (int j = 0; j < (int)m->side; ++j) {
			printf("%i -> %c; ", j, vcurr[j]);
		}
		puts("\n");
		(*nsol)++;
		return;
	}

	for (int j = 0; c[j] != 0; ++j) {
		if (Contrains(m, i, vcurr, c[j])) {
			vcurr[i] = c[j];
			ColorMapRec(m, c, vcurr, i + 1, nsol);
		}
	}
}

int ColorMap(const struct SquareMatrix* m, const char* c) {
	char* vcurr = malloc(m->side * sizeof(char));
	int nsol = 0;
	ColorMapRec(m, c, vcurr, 0, &nsol);
	free(vcurr);

	return nsol;
}