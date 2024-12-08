#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void stampa_cornicetta(const char* s) {

	size_t l = strlen(s);
	printf("/");
	for (size_t i = 0; i < (l + 2); ++i) {
		printf("-");
	}
	printf("\\\n");
	printf("| %s |\n", s);
	printf("\\");
	for (size_t i = 0; i < (l + 2); ++i) {
		printf("-");
	}
	printf("/\n");

	return;
}