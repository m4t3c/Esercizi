#include "minheap.h"

extern Heap* HeapMinHeapify(const ElemType* v, size_t v_size);

int main(void) {

	ElemType arr[] = { 9, 1, 4, 10, 0, 2, 3, 7, 8 };
	size_t size = sizeof(arr) / sizeof(arr[0]);

	Heap* res = HeapMinHeapify(arr, size);

	return 0;
}