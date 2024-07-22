#include "list.h"

const ElemType* MaxElement(const Item* i);

int main(void) {

	ElemType v[] = { 1, 45, 0, 2, 4, 1, 3 };
	Item* i = ListCreateEmpty();
	for (size_t j = 0; j < 7; ++j) {
		i = ListInsertBack(i, &v[j]);
	}
	const ElemType* res = MaxElement(i);

	return 0;
}