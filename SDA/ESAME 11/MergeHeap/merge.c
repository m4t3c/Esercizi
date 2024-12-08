#include "minheap.h"

Heap* MergeHeap(const Heap* h1, const Heap* h2) {

	Heap* res = HeapCreateEmpty();
	Heap* tmp = res;

	for (size_t i = 0; i < h1->size; ++i) {
		HeapMinInsertNode(tmp, HeapGetNodeValue(h1, (int)i));
	}

	for (size_t i = 0; i < h2->size; ++i) {
		HeapMinInsertNode(tmp, HeapGetNodeValue(h2, (int)i));
	}

	return res;
}