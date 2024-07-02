#include "minheap.h"

extern bool HeapMinPop(Heap* h, ElemType* e);

int main(void) {
	ElemType vec[] = { 2, 4, 5, 6, 76, 11, 16, 3, 7, 12 };
	Heap* h = HeapCreateEmpty();
	for (size_t i = 0; i < 10; ++i) {
		HeapMinInsertNode(h, &vec[i]);
	}
	HeapWriteStdout(h);

	ElemType e = 0;

	bool r = HeapMinPop(h, &e);
	HeapWriteStdout(h);

	return 0;

}