#include "list.h"

Item* Diff(const Item* i1, const Item* i2);

Item* ListCreateFromVector(const ElemType* vec, size_t size) {
	Item* list = ListCreateEmpty();
	for (size_t i = 0; i < size; i++) {
		list = ListInsertBack(list, &vec[i]);
	}

	return list;
}

int main(void) {

	ElemType vec1[] = { 1, 45, 0, 2, 4, 1, 3 };
	size_t vec1_size = sizeof(vec1) / sizeof(ElemType);
	Item* l1 = ListCreateFromVector(vec1, vec1_size);
	ElemType vec2[] = { 7, 45, 3, 2, 5 };
	size_t vec2_size = sizeof(vec2) / sizeof(ElemType);
	Item* l2 = ListCreateFromVector(vec2, vec2_size);

	Item* res = Diff(l1, l2);
	ListWriteStdout(res);

	ListDelete(l1);
	ListDelete(l2);
	ListDelete(res);

	return 0;
}