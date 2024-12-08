#include "list.h"

Item* ElementiPari(const Item* i) {

	Item* res = ListCreateEmpty();
	size_t j = 0;

	while (!ListIsEmpty(i)) {
		if (j == 0 || j % 2 == 0) {
			res = ListInsertBack(res, ListGetHeadValue(i));
		}
		i = ListGetTail(i);
		++j;
	}

	return res;
}