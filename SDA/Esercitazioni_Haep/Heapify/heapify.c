#include "minheap.h"
#include <stdlib.h>
#include <string.h>

Heap* HeapMinHeapify(const ElemType* v, size_t v_size) {

	if (v == NULL) {
		return HeapCreateEmpty();
	}

	Heap* res = HeapCreateEmpty();
	res->size = v_size;
	res->data = malloc(res->size * sizeof(ElemType));
	memcpy(res->data, v, res->size * sizeof(ElemType));
	
	for (int i = HeapParent((int)res->size); i >= 0; --i) {
		HeapMinMoveDown(res, i);
	}

	return res;
}