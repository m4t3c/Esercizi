#include "concatena.h"

int main(void) {

	ElemType data1[] = { 33, 1, 5, 67 };
	ElemType data2[] = { 7, 23, 11, 88, 2 };

	Item* i1 = ListCreateEmpty();
	for (size_t i = 0; i < 4; ++i) {
		i1 = ListInsertBack(i1, &data1[i]);
	}
	Item* i2 = ListCreateEmpty();
	for (size_t i = 0; i < 5; ++i) {
		i2 = ListInsertBack(i2, &data2[i]);
	}

	Item* res1 = Concatena(i1, i2, kCopy);
	Item* res2 = Concatena(i1, i2, kNoCopy);

	return 0;
}