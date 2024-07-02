#include "minheap.h"

void HeapMinMoveUpRec(Heap* h, int i) {

	if (ElemCompare(HeapGetNodeValue(h, i), HeapGetNodeValue(h, HeapParent(i))) > 0) {
		return;
	}

	ElemSwap(HeapGetNodeValue(h, i), HeapGetNodeValue(h, HeapParent(i)));
	i = HeapParent(i);

	HeapMinMoveUpRec(h, i);
}