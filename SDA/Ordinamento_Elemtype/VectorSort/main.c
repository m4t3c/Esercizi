#include "vettore.h"

int main(void) {

	ElemType data[] = { 4, 34, 12, -2, 5, 1, 3 };
	Vector* i = malloc(sizeof(Vector));
	i->data = data;
	i->size = 7;
	i->capacity = sizeof(data) / sizeof(ElemType);

	VectorSort(i);

	return 0;
}