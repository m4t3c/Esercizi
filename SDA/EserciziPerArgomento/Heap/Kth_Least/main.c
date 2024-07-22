#include "minheap.h"

extern ElemType* KthLeast(const Heap* h, int k);

int main(void) {

	ElemType arr[] = { 9, 1, 4, 10, 0, 2, 3, 7, 8 };
	size_t size = sizeof(arr) / sizeof(arr[0]);

	Heap* h = HeapCreateEmpty();
	for (size_t i = 0; i < size; ++i) {
		HeapMinInsertNode(h, arr + i);
	}
	HeapWriteStdout(h);

	ElemType* res = KthLeast(h, 5);

	HeapDelete(h);

	return 0;
}