#include "vettore.h"

int VectorFind(const Vector* v, const ElemType* e) {

	if (v == NULL) {
		return -1;
	}

	int i;
	for (i = 0; i < (int)v->size; i++)
	{
		if (ElemCompare(&v->data[i], e) > 0) {
			break;
		}
		if (ElemCompare(&v->data[i], e) == 0) {
			return i;
		}
	}

	return -1;
}