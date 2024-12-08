#include "minheap.h"

extern bool Pop(Heap* h, ElemType* e);

int main(void) {

	ElemType arr[] = { 22, 54, 3, 677, 2, 5, 12, 33 };
	Heap* h = HeapCreateEmpty();
	for (size_t i = 0; i < 8; ++i) {
		HeapMinInsertNode(h, &arr[i]);
	}

	HeapWriteStdout(h);

	ElemType e = 0;
	bool res = Pop(h, &e);

	return 0;
}