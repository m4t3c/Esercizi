#include "list.h"

Item* Taglia(Item* i, int n) {

	if (n < 0) {
		return i;
	}

	if (i == 0) {
		ListDelete(i);
		return ListCreateEmpty();
	}

	Item* tmp = i;
	int j = 0;
	while (!ListIsEmpty(ListGetTail(tmp)))
	{
		if (j + 1 == n) {
			ListDelete(ListGetTail(tmp));
			tmp->next = NULL;
			break;
		}
		++j;
		tmp = ListGetTail(tmp);
	}

	return i;
}