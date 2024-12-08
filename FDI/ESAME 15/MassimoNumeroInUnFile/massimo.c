#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cercaMassimo(const char* filename) {

	FILE* f = fopen(filename, "r");
	int tmp = 0;
	int max = 0;
	while (fscanf(f, "%d", &tmp) == 1) {
		if (tmp > max) {
			max = tmp;
		}
	}
	fclose(f);

	return max;
}