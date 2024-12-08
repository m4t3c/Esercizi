#include "minheap.h"
#include <string.h>
#include <stdlib.h>

ElemType KthLeast(const Heap* h, int k) {

	Heap* copy = HeapCreateEmpty();
	copy->size = h->size;
	copy->data = malloc(copy->size * sizeof(int));
	memcpy(copy->data, h->data, copy->size * sizeof(int));

	while (k > 1) {
		ElemSwap(HeapGetNodeValue(copy, 0), HeapGetNodeValue(copy, (int)copy->size - 1));
		(copy->size)--;
		HeapMinMoveDown(copy, 0);
		--k;
	}

	ElemType *res = HeapGetNodeValue(copy, 0);
	free(copy->data);
	free(copy);
	return *res;
}