#include "get_pop.h"
#include <stdlib.h>

ElemType* Get(const Heap* h) {

	if (h == NULL || HeapIsEmpty(h)) {
		return NULL;
	}
	return HeapGetNodeValue(h, h->data[0]);
}

void Pop(Heap* h) {

	if (HeapIsEmpty(h) || h == NULL) {
		return;
	}

	ElemSwap(&h->data[0], &h->data[h->size - 1]);
	ElemDelete(&h->data[h->size - 1]);
	h->size--;
	h->data = realloc(h->data, h->size * sizeof(ElemType));
	HeapMinMoveDown(h, 0);
}