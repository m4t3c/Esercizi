#include "minheap.h"

void HeapMinHeapsort(Heap* h) {
	size_t size = h->size;

	while (h->size > 1)
	{
		ElemSwap(HeapGetNodeValue(h, 0), HeapGetNodeValue(h, (int)h->size - 1));
		HeapMinMoveDown(h, 0);
		--h->size;
	}

	h->size = size;
}