#include "minheap.h"
#include <stdlib.h>

Heap* HeapCopy(const Heap* h) {

	if (HeapIsEmpty(h)) {
		return HeapCreateEmpty();
	}

	if (h == NULL) {
		return NULL;
	}

	Heap* res = HeapCreateEmpty();
	res->size = h->size;
	if (h->size == 0) {
		res->data = NULL;
	}
	else
	{
		res->data = malloc(h->size * sizeof(ElemType));
	}
	
	for (size_t i = 0; i < h->size; ++i) {
		res->data[i] = ElemCopy(&h->data[i]);
	}

	return res;
}