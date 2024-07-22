#include "minheap.h"

extern Heap* HeapMinHeapify(const ElemType* v, size_t v_size);
extern void DeleteNode(Heap* h, int k);

int main(void) {

	const ElemType v[] = { 3, -1, 6, 4 };
	size_t v_size = 4;
	Heap* h = HeapMinHeapify(v, v_size);
	DeleteNode(h, 2);

	return 0;
}