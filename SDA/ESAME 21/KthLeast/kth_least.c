#include "minheap.h"

int KthLeast(const int* v, size_t n, int k) {

	Heap* h = HeapCreateEmpty();
	for (size_t i = 0; i < n; i++) {
		HeapMinInsertNode(h, &v[i]);
	}
	int res = 0;

	while (k > 0) {
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