#include "vettore.h"
#include <stdlib.h>

int main(void) {

	Vector* v = malloc(sizeof(Vector));
	v->capacity = 8;
	v->size = 8;
	ElemType data[] = { 2, 4, 6, 33, 1, 32, 16, 22 };
	v->data = data;

	VectorSort(v);

	return 0;
}