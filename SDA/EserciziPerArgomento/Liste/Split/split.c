#include "list.h"

Item* Split(Item* i) {

	if (i == NULL) {
		return NULL;
	}

	Item* tmp = i;
	size_t size = 0;
	while (!ListIsEmpty(tmp))
	{
		++size;
		tmp = ListGetTail(tmp);
	}

	Item* a = i;
	Item* b = ListGetTail(a);

	if (size % 2 == 0) {
		for (size_t j = 0; j < size / 2; ++j) {
			if (j + 1 == size / 2) {
				a->next = NULL;
				break;
			}
			a = ListGetTail(a);
			b = ListGetTail(b);
		}
	}
	else
	{
		for (size_t j = 0; j <= size / 2; ++j) {
			if (j == size / 2) {
				a->next = NULL;
				break;
			}
			a = ListGetTail(a);
			b = ListGetTail(b);
		}
	}

	return b;
}