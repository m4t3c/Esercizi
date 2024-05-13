#include "list.h"
#include <stdlib.h>

Item* IntersectNoRep(const Item* i1, const Item* i2);
Item* DiffNoRep(const Item* i1, const Item* i2);

Item* ListCreateFromVector(const ElemType* vec, size_t size) {
	Item* res = ListCreateEmpty();
	for (size_t i = 0; i < size; ++i) {
		res = ListInsertBack(res, &vec[i]);
	}

	return res;
}

int main(void) {
	
	ElemType vec1[] = { 3, 4, 2, 0, 45, 1, 3 };
	size_t size1 = sizeof(vec1) / sizeof(ElemType);
	Item* l1 = ListCreateFromVector(vec1, size1);
	ElemType vec2[] = { 8, 5, 2, 3, 45, 7 };
	size_t size2 = sizeof(vec2) / sizeof(ElemType);
	Item* l2 = ListCreateFromVector(vec2, size2);

	Item* res1 = IntersectNoRep(l1, l2);
	ListWriteStdout(res1);
	ListDelete(res1);

	Item* res2 = DiffNoRep(l1, l2);
	ListWriteStdout(res2);
	ListDelete(l1);
	ListDelete(l2);
	ListDelete(res2);

	return 0;
}