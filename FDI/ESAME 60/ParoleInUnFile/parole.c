#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** extract_parole(const char* filename, size_t* n) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}
	size_t sum = 0;
	char parola[256];

	char** parole = NULL;

	while (fscanf(f, "%s", parola) == 1) {

		++sum;

		parole = realloc(parole, sum * sizeof(char*));
		parole[sum - 1] = calloc(1, (strlen(parola) + 1));
		strncpy(parole[sum - 1], parola, strlen(parola));
	}
	*n = sum;
	fclose(f);
	return parole;
}