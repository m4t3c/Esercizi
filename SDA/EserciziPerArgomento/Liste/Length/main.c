#include "list.h"

int main(void) {

	Item* l = ListCreateEmpty();
	ElemType data[] = { 3, 45, 5, 1, 2 };
	for (size_t i = 0; i < 5; ++i) {
		l = ListInsertBack(l, &data[i]);
	}

	int res = ListLength(l);

	return 0;
}