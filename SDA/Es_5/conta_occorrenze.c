#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern int ContaOccorrenze(const char* filename, const char* str) {
	if (filename == NULL || str == NULL) {
		return 0;
	}

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return 0;
	}

	int res = 0;
	char string[100];

	while (fscanf(f, "%s", string) == 1) {
		if (strcmp(string, str) == 0) {
			res++;
		}
	}

	fclose(f);

	return res;
}
