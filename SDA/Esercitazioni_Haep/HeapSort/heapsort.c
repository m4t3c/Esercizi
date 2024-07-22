#include "minheap.h"

void HeapMinHeapsort(Heap* h) {

	size_t size = h->size;

	while (h->size > 1)
	{
		ElemSwap(&h->data[0], &h->data[(int)h->size - 1]);
		h->size--;
		HeapMinMoveDown(h, 0);
	}

	h->size = size;
}
