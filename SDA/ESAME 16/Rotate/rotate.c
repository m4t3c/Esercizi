#include "list.h"

Item* ListGetLast(Item* i) {

	Item* last = i;

	while (!ListIsEmpty(last->next)) {
		last = ListGetTail(last);
	}

	return last;
}

Item* Rotate(Item* i, int n) {
	
	if (n == 0) {
		return i;
	}

	Item* res = i->next;
	Item* prev = i;
	Item* last = ListGetLast(i);

	for (int j = 1; j < n; ++j) {
		res = ListGetTail(res);
		prev = ListGetTail(prev);
	}

	last->next = i;
	prev->next = NULL;

	return res;
}