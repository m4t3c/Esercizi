#include "minheap.h"

extern Heap* MergeHeap(const Heap* h1, const Heap* h2);

int main(void) {

	int arr1[] = { 3, 56, 2, 22, 11, 8 };
	Heap* h1 = HeapCreateEmpty();
	for (size_t i = 0; i < 6; ++i) {
		HeapMinInsertNode(h1, &arr1[i]);
	}
	int arr2[] = { 33, 12, 1, 587, 28, 6 };
	Heap* h2 = HeapCreateEmpty();
	for (size_t i = 0; i < 6; ++i) {
		HeapMinInsertNode(h2, &arr2[i]);
	}

	Heap* res = MergeHeap(h1, h2);
	HeapWriteStdout(res);

	return 0;
}