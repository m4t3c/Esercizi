#include "list.h"

extern int ContaVette(const Item* i);

int main(void) {

	int vec[] = { 7, 2, 5, 4 };
	Item* i = ListCreateEmpty();
	for (size_t j = 0; j < 4; ++j) {
		i = ListInsertBack(i, &vec[j]);
	}

	int res = ContaVette(i);

	return 0;
}