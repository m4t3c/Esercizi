#include "minheap.h"

extern bool IsHeap(const Heap* h);

int main(void) {
	
	ElemType arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	size_t size = sizeof(arr) / sizeof(arr[0]);

	Heap* res = HeapCreateEmpty();
	res->data = arr;
	res->size = size;

	bool i = IsHeap(res);

	res ? printf("il vettore e' una min-heap") : printf("il vettore non e' una min-heap");

	return 0;
}