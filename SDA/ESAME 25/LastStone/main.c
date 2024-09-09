#include "maxheap.h"

extern int LastStoneWeight(Heap* h);

int main(void) {

	ElemType arr[] = { 77, 21, 18 };
	Heap* h = HeapCreateEmpty();
	for (size_t i = 0; i < 3; ++i) {
		HeapMaxInsertNode(h, &arr[i]);
	}

	int res = LastStoneWeight(h);
	
	return 0;
}