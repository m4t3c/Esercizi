#include "list.h"

Item* Intersect(const Item* i1, const Item* i2);

int main(void) {

	ElemType v1[] = { 3, 4, 2, 0, 45, 1, 3 };
	Item* i1 = ListCreateEmpty();
	for (size_t i = 0; i < 7; ++i) {
		i1 = ListInsertBack(i1, &v1[i]);
	}
	ElemType v2[] = { 8, 5, 2, 3, 45, 7 };
	Item* i2 = ListCreateEmpty();
	for (size_t i = 0; i < 6; ++i) {
		i2 = ListInsertBack(i2, &v2[i]);
	}

	Item* res = Intersect(i1, i2);
	ListWriteStdout(res);

	ListDelete(res);
	return 0;
}