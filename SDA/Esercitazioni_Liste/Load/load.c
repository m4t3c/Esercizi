#define _CRT_SECURE_NO_WARNINGS
#include "list.h"

Item* ListLoad(const char* filename) {

	Item* res = ListCreateEmpty();
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return res;
	}

	int n = 0;
	while (fscanf(f, "%d ", &n) == 1) {
		res = ListInsertHead(&n, res);
	}

	fclose(f);
	return res;
}