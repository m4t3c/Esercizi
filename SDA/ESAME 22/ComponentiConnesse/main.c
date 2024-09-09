#include "cc.h"

int main(void) {

	ElemType arr[] = { 0, 1, 2, 3, 4 };
	Item* i = ListCreateEmpty();
	for (size_t j = 0; j < 5; ++j) {
		i = ListInsertBack(i, &arr[j]);
	}

	ElemType v[] = { 1, 4 };

	int res = ComponentiConnesse(i, v, 5);

	return 0;
}