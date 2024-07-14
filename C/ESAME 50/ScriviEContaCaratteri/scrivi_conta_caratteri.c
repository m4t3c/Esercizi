#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int scrivi_conta_caratteri(FILE* f, const char* s) {

	if (f == NULL || s == NULL) {
		return 0;
	}

	fputs(s, f);
	fputc('\n', f);
	int res = 0;
	for (size_t i = 0; i < strlen(s); ++i) {
		size_t n = (i + 1) % 10;
		fprintf(f, "%zu", n);
		++res;
	}
	fputc('\n', f);

	return res;
}