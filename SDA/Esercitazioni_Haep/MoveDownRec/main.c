#include "minheap.h"
#include <string.h>
#include <stdlib.h>


extern void HeapMinMoveDownRec(Heap* h, int i);

Heap* HeapCreateFromVector(const ElemType* v, size_t size) {
	Heap* res = HeapCreateEmpty();

	res->data = malloc(size * sizeof(ElemType));
	memcpy(res->data, v, size * sizeof(ElemType));
	res->size = size;

	return res;
}

int main(void) {

	const ElemType vec[] = { 1, 3, 6, 2, 9, 15 };
	Heap* res = HeapCreateFromVector(vec, 6);
	HeapWriteStdout(res);

	HeapMinMoveDownRec(res, 1);
	HeapWriteStdout(res);

	return 0;
}