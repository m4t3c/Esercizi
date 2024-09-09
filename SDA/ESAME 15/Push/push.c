#include "minheap.h"
#include <stdlib.h>

void Push(Heap* h, const ElemType* e) {

	++h->size;
	h->data = realloc(h->data, (h->size) * sizeof(ElemType));
	h->data[h->size - 1] = ElemCopy(e);

	int i = (int)h->size - 1;
	while (i != 0) {
		int parentindex = HeapParent(i);
		if (ElemCompare(HeapGetNodeValue(h, i), HeapGetNodeValue(h, parentindex)) < 0) {
			ElemSwap(HeapGetNodeValue(h, i), HeapGetNodeValue(h, parentindex));

			i = parentindex;
		}
		else
		{
			break;
		}
	}

}