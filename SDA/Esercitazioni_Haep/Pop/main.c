#include "minheap.h"

extern bool HeapMinPop(Heap* h, ElemType* e);

int main(void) {

	ElemType arr[] = { 5, 1, 0, 9 , 2, 3, 8, 10, 7 };
	size_t size = sizeof(arr) / sizeof(arr[0]);

	Heap* h = HeapCreateEmpty();
	for (size_t i = 0; i < size; ++i) {
		HeapMinInsertNode(h, arr + i);
	}

	HeapWriteStdout(h);

	ElemType popped;
	bool res = HeapMinPop(h, &popped);
	HeapWriteStdout(h);

	return 0;
}