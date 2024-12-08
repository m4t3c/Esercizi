#include "list.h"

int main(void) {

	Item* l = ListCreateEmpty();
	ElemType data[] = { 3, 34, 2, 3, 11, 3, 5, 32, 1, 3, 4 };
	for (size_t i = 0; i < 11; ++i) {
		l = ListInsertBack(l, &data[i]);
	}

	ElemType c = 3;

	int res = ListOccorrenze(l, &c);

	return 0;
}