#include <stdio.h>
#include <stdlib.h>

void histogram(const char* values, size_t n) {

	for (size_t i = 0; i < n; ++i) {
		for (char j = 0; j < values[i]; ++j) {
			fprintf(stdout, "*");
		}
		fprintf(stdout, "\n");
	}
}