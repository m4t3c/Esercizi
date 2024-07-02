#include "minheap.h"

void HeapMinMoveDownRec(Heap* h, int i) {
	
	int smallest = i;
	int left = HeapLeft(i);
	int right = HeapRight(i);

	if ((left < (int)h->size && ElemCompare(HeapGetNodeValue(h, smallest), HeapGetNodeValue(h, left)) > 0)) {
		smallest = left;
	}

	if ((right < (int)h->size && ElemCompare(HeapGetNodeValue(h, smallest), HeapGetNodeValue(h, right)) > 0)) {
		smallest = right;
	}

	if (smallest != i) {
		ElemSwap(h->data + i, h->data + smallest);
		HeapMinMoveDownRec(h, smallest);
	}
}