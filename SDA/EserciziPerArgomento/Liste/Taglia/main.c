#include "list.h"

extern Item* Taglia(Item* i, int n);

int main(void) {

	ElemType data[] = { 3, 5, 11, 23, 456, 1, 25, 9, 10 };
	Item* i = ListCreateEmpty();
	for (size_t j = 0; j < 9; ++j) {
		i = ListInsertBack(i, &data[j]);
	}

	Item* res = Taglia(i, 6);

	return 0;
}