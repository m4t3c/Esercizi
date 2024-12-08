#include "minheap.h"

void HeapMinHeapSort(Heap* h) {

	if (h == NULL || HeapIsEmpty(h)) {
		return;
	}

	size_t origin_size = h->size;

	while (h->size >= 2)
	{
		ElemSwap(HeapGetNodeValue(h, 0), HeapGetNodeValue(h, h->size - 1));
		h->size--;
		HeapMinMoveDown(h, 0);
	}

	h->size = origin_size;
}