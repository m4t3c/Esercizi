#include "sum_dlist.h"

int main(void) {

	ElemType arr1[] = { 9, 5, 4 };
	Item* i1 = DListCreateEmpty();
	for (size_t i = 0; i < 3; ++i) {
		i1 = DListInsertBack(i1, &arr1[i]);
	}

	ElemType arr2[] = { 6, 9 };
	Item* i2 = DListCreateEmpty();
	/*for (size_t i = 0; i < 2; ++i) {
		i2 = DListInsertBack(i2, &arr2[i]);
	}*/

	Item* res = DListSum(i1, i2);
	DListWriteStdout(res);

	return 0;
}