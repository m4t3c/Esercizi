#include <stdlib.h>
#include <stdio.h>



void stampa_onde(FILE* f, int n) {

	if (n == 0) {
		fprintf(f, "\n\n\n");
	}

	for (int i = 0; i < n; ++i) {
		fprintf(f, " _");
		if (i < n - 1) {
			fprintf(f, "    ");
		}
	}
	fputc('\n', f);

	for (int i = 0; i < n; ++i) {
		fprintf(f, "/ \\");
		if (i < n - 1) {
			fprintf(f, "   ");
		}
	}
	fputc('\n', f);

	for (int i = 0; i < n; ++i) {
		fprintf(f, "   \\_/");

	}
	fputc('\n', f);

}