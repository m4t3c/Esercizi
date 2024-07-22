#include "differenza.h"

int main(void) {

	ElemType v1[] = { 7, 1, 0, 1 };
	Item* i1 = ListCreateEmpty();
	for (size_t i = 0; i < 4; ++i) {
		i1 = ListInsertBack(i1, &v1[i]);
	}

	ElemType v2[] = { 3, 2, 4 };
	Item* i2 = ListCreateEmpty();
	for (size_t i = 0; i < 3; ++i) {
		i2 = ListInsertBack(i2, &v2[i]);
	}

	Item* res = Differenza(i1, i2);
	ListWriteStdout(res);

	return 0;
}