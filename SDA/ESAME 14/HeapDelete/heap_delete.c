#include "minheap.h"

void HeapDeleteNode(Heap* h, int k) {
	
	if (k >= (int)h->size) {
		return;
	}

	ElemSwap(HeapGetNodeValue(h, k), HeapGetNodeValue(h, (int)h->size - 1));
	(h->size)--;

	HeapMinMoveDown(h, k);
}