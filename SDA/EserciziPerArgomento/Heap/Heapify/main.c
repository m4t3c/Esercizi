#include "minheap.h"

extern Heap* HeapMinHeapify(const ElemType* v, size_t v_size);

int main(void) {

	ElemType v[] = { 0, 12, 4, 21, 2, 18, 77, 8, 9 };
	Heap* res = HeapMinHeapify(v, 9);

	return 0;
}