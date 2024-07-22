#include "minheap.h"

void HeapMinMoveDownRec(Heap* h, int i) {

	int l = HeapLeft(i);
	int r = HeapRight(i);
	int smallest = i;

	if (l < (int)h->size && ElemCompare(HeapGetNodeValue(h, smallest), HeapGetNodeValue(h, l)) > 0) {
		smallest = l;
	}

	if (r < (int)h->size && ElemCompare(HeapGetNodeValue(h, smallest), HeapGetNodeValue(h, r)) > 0) {
		smallest = r;
	}

	if (smallest != i) {
		ElemSwap(&h->data[i], &h->data[smallest]);
		HeapMinMoveDownRec(h, smallest);
	}
}