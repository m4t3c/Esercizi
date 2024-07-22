#include "maxheap.h"

extern int LastStoneWeight(Heap* h);

int main(void) {

	Heap* h = HeapCreateEmpty();
	ElemType v[] = { 77, 21, 18 };
	for (size_t i = 0; i < 3; ++i) {
		HeapMaxInsertNode(h, &v[i]);
	}
	
	int res = LastStoneWeight(h);

	return 0;
}