#include "list.h"

extern int ContaVette(const Item* i);

int main(void) {
	ElemType data[] = { 7, 2, 5, 5, 4 };
	Item* i = ListCreateEmpty();
	for (size_t j = 0; j < 5; ++j) {
		i = ListInsertBack(i, &data[j]);
	}

	int r = ContaVette(i);

	return 0;
}