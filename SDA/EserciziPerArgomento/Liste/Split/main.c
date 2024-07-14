#include "list.h"

extern Item* Split(Item* i);

int main(void) {

	ElemType data[] = { 2, 54, 1, 22, 7, 66, 20, 32, 5 };
	Item* l = ListCreateEmpty();
	for (size_t i = 0; i < 9; ++i) {
		l = ListInsertBack(l, &data[i]);
	}

	Item* res = Split(l);

	return 0;
}