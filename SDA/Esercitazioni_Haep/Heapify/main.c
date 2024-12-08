#include "minheap.h"

extern Heap* HeapMinHeapify(const ElemType* v, size_t v_size);

int main(void) {

	int arr[] = { 2, 3, 5, 6, 1, 9, 7, 10 };

	Heap* res = HeapMinHeapify(arr, 8);
	HeapWriteStdout(res);

	return 0;
}