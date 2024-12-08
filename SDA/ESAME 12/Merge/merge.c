#include "minheap.h"

Heap* MergeHeap(const Heap* h1, const Heap* h2) {

	Heap* res = HeapCreateEmpty();
	Heap* tmp = res;

	for (int i = 0; i < (int)h1->size; ++i) {
		HeapMinInsertNode(tmp, HeapGetNodeValue(h1, i));
	}

	for (int i = 0; i < (int)h2->size; ++i) {
		HeapMinInsertNode(tmp, HeapGetNodeValue(h2, i));
	}

	return res;
}