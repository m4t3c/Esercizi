#include "get_pop.h"

int main(void) {

	ElemType arr[] = { 0, 12, 4, 21, 2, 18, 77, 8, 9 };
	size_t size = sizeof(arr) / sizeof(arr[0]);

	Heap* h = HeapCreateEmpty();
	for (size_t i = 0; i < size; ++i) {
		HeapMinInsertNode(h, arr + i);
	}
	HeapWriteStdout(h);

	ElemType* v = Get(h);
	Pop(h);
	HeapWriteStdout(h);
	HeapDelete(h);
	
	return 0;
}