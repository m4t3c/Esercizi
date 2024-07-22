#include "minheap.h"

extern void HeapMinMoveDownRec(Heap *h, int i);

int main(void) {

	ElemType v[] = { 2, 3, 5, 8, 22, 40, 42, 50 };
	Heap* h = HeapCreateEmpty();
	for (size_t i = 0; i < 8; ++i) {
		HeapMinInsertNode(h, &v[i]);
	}
	
	ElemSwap(&h->data[2], &h->data[5]);

	HeapWriteStdout(h);

	HeapMinMoveDownRec(h, 2);

	HeapWriteStdout(h);

	HeapDelete(h);

	return 0;
}