#include "minheap.h"

extern void HeapMinHeapsort(Heap* h);

int main(void) {
	ElemType vec[] = { 2, 4, 5, 6, 76, 11, 16, 3, 7, 12 };
	Heap* h = HeapCreateEmpty();
	for (size_t i = 0; i < 10; ++i) {
		HeapMinInsertNode(h, &vec[i]);
	}
	HeapWriteStdout(h);

	HeapMinHeapsort(h);

	return 0;
}
