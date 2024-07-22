#include "minheap.h"

void HeapMinMoveUpRec(Heap* h, int i) {

	if (i == 0 || ElemCompare(HeapGetNodeValue(h, HeapParent(i)), HeapGetNodeValue(h, i)) <= 0) {
		return;
	}

	ElemSwap(HeapGetNodeValue(h, i), HeapGetNodeValue(h, HeapParent(i)));
	i = HeapParent(i);

	HeapMinMoveUpRec(h, i);
}