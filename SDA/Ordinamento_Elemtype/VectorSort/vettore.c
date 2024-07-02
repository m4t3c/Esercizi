#include "vettore.h"

void VectorSort(Vector* v) {

	size_t i;
	for (i = v->size; i > 0; --i) {
		if (ElemCompare(v->data[i], v->data[i - 1]) >= 0) {
			continue;
		}
		else
		{
			ElemSwap(v->data[i], v->data[i - 1]);
		}
	}
}