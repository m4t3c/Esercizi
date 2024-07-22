#include "list.h"

Item* Diff(const Item* i1, const Item* i2);

int main(void) {

	ElemType v1[] = { 1, 45, 0, 2, 4, 1, 3 };
	Item* i1 = ListCreateEmpty();
	for (size_t i = 0; i < 7; ++i) {
		i1 = ListInsertBack(i1, &v1[i]);
	}
	ElemType v2[] = { 7, 45, 3, 2, 5 };
	Item* i2 = ListCreateEmpty();
	for (size_t i = 0; i < 5; ++i) {
		i2 = ListInsertBack(i2, &v2[i]);
	}

	Item* res = Diff(i1, i2);
	ListWriteStdout(res);
	ListDelete(res);

	return 0;
}