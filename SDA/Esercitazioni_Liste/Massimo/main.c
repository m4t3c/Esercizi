#include "list.h"

const ElemType* MaxElement(const Item* i);

int main(void) {
	Item* i = ListCreateEmpty();
	int data[] = { 3, 4, 2, 0, 45, 1, 3 };
	for (size_t j = 0; j < 7; ++j) {
		i = ListInsertBack(i, &data[j]);
	}

	ElemType* res = MaxElement(i);

	return 0;
}