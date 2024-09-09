#include "minheap.h"

extern void Push(Heap* h, const ElemType* e);

int main(void) {

	int arr[] = { 10, 23, 1, 55, 3, 8, 398, 12, 7 };
	Heap* h = HeapCreateEmpty();
	for (size_t i = 0; i < 9; ++i) {
		HeapMinInsertNode(h, &arr[i]);
	}

	HeapWriteStdout(h);
	ElemType e = 67;
	Push(h, &e);
	HeapWriteStdout(h);

	return 0;
}