#include "minheap.h"
#include <stdlib.h>
#include <string.h>

 Heap* HeapMinHeapify(const ElemType* v, size_t v_size) {

	 Heap* res = HeapCreateEmpty();
	 res->size = v_size;
	 res->data = malloc(v_size * sizeof(ElemType));
	 memcpy(res->data, v, v_size * sizeof(ElemType));

	 for (int i = (int)res->size / 2 - 1; i >= 0; --i) {
		 HeapMinMoveDown(res, i);
	 }

	 return res;
}