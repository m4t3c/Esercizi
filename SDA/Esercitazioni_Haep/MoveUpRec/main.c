#include "minheap.h"
#include <stdlib.h>

extern void HeapMinMoveUpRec(Heap* h, int i);

int main(void) {

	ElemType arr[] = { 1, 3, 8, 11, 2, 7, 10, 5, 4, 0 };
	size_t size = sizeof(arr) / sizeof(arr[0]);

	Heap* h = HeapCreateEmpty();

	for (size_t i = 0; i < size - 1; ++i) {
		HeapMinInsertNode(h, arr + i);
	}

	h->size++;
	h->data = realloc(h->data, h->size * sizeof(ElemType));
	h->data[h->size - 1] = arr[size - 1];

	HeapWriteStdout(h);
	HeapMinMoveUpRec(h, h->size - 1);
	HeapWriteStdout(h);

	return 0;
}