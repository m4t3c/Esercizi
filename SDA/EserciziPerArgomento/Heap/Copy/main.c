#include "minheap.h"

extern Heap* Heapify(const ElemType* v, size_t v_size);
extern Heap* HeapCopy(const Heap* h);

int main(void) {

	ElemType v[] = { 0, 12, 4, 21, 2, 18, 77, 8, 9 };
	size_t v_size = 9;
	Heap* h = Heapify(v, v_size);
	Heap* c = HeapCopy(h);

	return 0;
}