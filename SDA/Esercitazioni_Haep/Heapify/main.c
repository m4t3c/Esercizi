#include "minheap.h"

extern Heap* HeapMinHeapify(const ElemType* v, size_t v_size);

int main(void) {

	const ElemType vec[] = { 5, 31, 9, 11, 12, 6, 20, 2, 10};

	Heap* res = HeapMinHeapify(vec, 9);
	HeapWriteStdout(res);

	return 0;
}