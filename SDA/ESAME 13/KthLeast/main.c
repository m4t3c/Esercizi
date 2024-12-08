#include "minheap.h"

extern ElemType KthLeast(const Heap* h, int k);

int main(void) {

	int arr[] = { 2, 4, 1, 55, 21, 7, 88, 45, 20, 11 };
	Heap* h = HeapCreateEmpty();
	for (size_t i = 0; i < 10; ++i) {
		HeapMinInsertNode(h, &arr[i]);
	}

	HeapWriteStdout(h);
	ElemType res = KthLeast(h, 8);
	ElemWriteStdout(&res);

	return 0;
}