#include "vettore.h"
#include <stdlib.h>

Vector* VectorRead(const char* filename) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	Vector* res = malloc(sizeof(Vector));
	res->capacity = 1;
	res->size = 0;
	res->data = malloc(sizeof(ElemType));
	
	ElemType e = 0;
	while (ElemRead(f, &e) != EOF)
	{
		if (res->size == res->capacity) {
			res->capacity *= 2;
			res->data = realloc(res->data, res->capacity * sizeof(ElemType));
		}

		res->data[res->size] = e;
		res->size++;
	}

	res->capacity = res->size + 1;
	res->data = realloc(res->data, res->capacity * sizeof(ElemType));

	fclose(f);
	return res;
}
Vector* VectorReadSorted(const char* filename) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	Vector* res = malloc(sizeof(Vector));
	res->capacity = 1;
	res->size = 0;
	res->data = malloc(sizeof(ElemType));

	ElemType e = 0;

	while (ElemRead(f, &e) != EOF) {

		if (res->size == res->capacity) {
			res->capacity *= 2;
			res->data = realloc(res->data, res->capacity * sizeof(ElemType));
		}

		size_t i;
		for (i = res->size; i > 0; --i) {
			if (ElemCompare(&e, &res->data[i - 1]) >= 0) {
				break;
			}
			res->data[i] = res->data[i - 1];
		}

		res->data[i] = e;
		res->size++;
	}

	res->capacity = res->size + 1;
	res->data = realloc(res->data, res->capacity * sizeof(ElemType));

	fclose(f);
	return res;
}