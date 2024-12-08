#include "list.h"

extern Item* Filter(Item* i, ElemType e);

int main(void) {

	ElemType data[] = { 43, 2, 11, 5, 3, 5, 12, 5, 16, 5, 78 };
	Item* i = ListCreateEmpty();
	for (size_t j = 0; j < 11; ++j) {
		i = ListInsertBack(i, &data[j]);
	}

	Item* res = Filter(i, 5);

	return 0;
}