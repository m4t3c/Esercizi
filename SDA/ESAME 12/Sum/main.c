#include "list.h"

extern Item* Sum(const Item* i1, const Item* i2);

int main(void) {

	int arr1[] = { 7, 2, 5, 4 };
	Item* i1 = ListCreateEmpty();
	for (int i = 0; i < 4; ++i) {
		i1 = ListInsertBack(i1, &arr1[i]);
	}

	int arr2[] = { 3, 2, 4 };
	Item* i2 = ListCreateEmpty();
	for (int i = 0; i < 3; ++i) {
		i2 = ListInsertBack(i2, &arr2[i]);
	}

	Item* res = Sum(i1, i2);
	ListWriteStdout(res);

	return 0;
}