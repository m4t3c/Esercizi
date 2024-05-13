#include "list.h"
#include <stdlib.h>

Item* Intersect(const Item* i1, const Item* i2);

Item* CreateListFromVector(const ElemType* vec, size_t size) {
	Item* list = ListCreateEmpty();
	for (size_t i = 0; i < size; ++i) {
		list = ListInsertBack(list, &vec[i]);
	}

	return list;
}

int main(void) {
	
	ElemType vec1[] = { 3, 4, 2, 0, 45, 1, 3 };
	size_t vec1_size = sizeof(vec1) / sizeof(ElemType);
	Item* list1 = CreateListFromVector(vec1, vec1_size);
	ElemType vec2[] = { 8, 5, 2, 3, 45, 7 };
	size_t vec2_size = sizeof(vec2) / sizeof(ElemType);
	Item* list2 = CreateListFromVector(vec2, vec2_size);

	Item* res = Intersect(list1, list2);
	ListWriteStdout(res);

	ListDelete(list1);
	ListDelete(list2);
	ListDelete(res);
	

	return 0;
}