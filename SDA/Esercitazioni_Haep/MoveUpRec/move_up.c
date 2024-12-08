#include "minheap.h"
#include <stdlib.h>

void HeapMinMoveUpRec(Heap* h, int i) {

	if (i == 0 || ElemCompare(HeapGetNodeValue(h, HeapParent(i)), HeapGetNodeValue(h, i)) <= 0) {
		return;
	}

	ElemSwap(HeapGetNodeValue(h, HeapParent(i)), HeapGetNodeValue(h, i));
	i = HeapParent(i);

	HeapMinMoveUpRec(h, i);
}