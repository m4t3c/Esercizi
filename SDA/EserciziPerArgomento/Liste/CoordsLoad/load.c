#define _CRT_SECURE_NO_WARNINGS
#include "list.h"
#include <stdlib.h>

Item* ListLoad(const char* filename) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return ListCreateEmpty();
	}

	Item* i = ListCreateEmpty();

	ElemType* p = malloc(sizeof(ElemType));
	while ((fscanf(f, "%i %i", &p->x, &p->y)) != EOF) {
		i = ListInsertHead(p, i);
	}

	fclose(f);

	return i;
}