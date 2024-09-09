#include "minheap.h"

extern void HeapDeleteNode(Heap* h, int k);

int main(void) {

	int arr[] = { 1, 33, 534, 11, 2, 67, 23 };
	Heap* h = HeapCreateEmpty();
	for (size_t i = 0; i < 7; ++i) {
		HeapMinInsertNode(h, &arr[i]);
	}
	
	HeapWriteStdout(h);
	HeapDeleteNode(h, 4);
	HeapWriteStdout(h);

	return 0;
}