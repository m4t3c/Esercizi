#include "list.h"

/*int ListLength(const Item* i) {

	int res = 0;
	while (!ListIsEmpty(i)) {
		i = ListGetTail(i);
		++res;
	}

	return res;
}*/

int ListLength(const Item* i) {

	if (ListIsEmpty(i)) {
		return 0;
	}

	i = ListGetTail(i);

	return  1 + ListLength(i);
}