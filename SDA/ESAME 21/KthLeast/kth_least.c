#include "minheap.h"
#include <stdlib.h>
#include <string.h>

int KthLeast(const int* v, size_t n, int k) {
	
	int* tmp = malloc(n * sizeof(int));
	memcpy(tmp, v, n * sizeof(int));
	Heap* h = HeapCreateEmpty();
	h->size = n;
	h->data = tmp;
	for (int i = (int)h->size / 2 - 1; i >= 0; --i) {
		HeapMinMoveDown(h, i);
	}

	int res = 0;

	while (k > 0)
	{
		res = h->data[0];
		ElemSwap(HeapGetNodeValue(h, 0), HeapGetNodeValue(h, (int)h->size - 1));
		h->size--;
		HeapMinMoveDown(h, 0);
		--k;
	}

	h->size = n;
	HeapDelete(h);
	return res;
}