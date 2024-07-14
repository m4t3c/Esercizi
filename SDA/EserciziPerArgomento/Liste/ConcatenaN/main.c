#include "list.h"

extern Item* ConcatenaN(Item** v, size_t v_size);

int main() {

	ElemType v1[] = { 2, 4, 67, 3 };
	Item* l1 = ListCreateEmpty();
	for (size_t i = 0; i < 4; ++i) {
		l1 = ListInsertBack(l1, &v1[i]);
	}
	ElemType v2[] = { 55, 3 ,1, 12, 1 };
	Item* l2 = ListCreateEmpty();
	for (size_t i = 0; i < 5; ++i) {
		l2 = ListInsertBack(l2, &v2[i]);
	}
	ElemType v3[] = { 11, 56, 7 };
	Item* l3 = ListCreateEmpty();
	for (size_t i = 0; i < 3; ++i) {
		l3 = ListInsertBack(l3, &v3[i]);
	}

	Item *l[] = { l1, l2, l3 };

	Item* res = ConcatenaN(l, 3);
	ListDelete(l1);
	ListDelete(l2);
	ListDelete(l3);
	ListDelete(res);

	return 0;
}