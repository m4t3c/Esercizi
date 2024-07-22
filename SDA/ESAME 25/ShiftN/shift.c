#include "shift.h"

static int ListGetLen(Item* list) {
	int res = 0;
	while (!ListIsEmpty(list))
	{
		++res;
		list = ListGetTail(list);
	}

	return res;
}

Item* ShiftN(Item* list, size_t n) {

	int len = ListGetLen(list);
	if (len == 0 || len == 1 || n == 0) {
		return list;
	}

	if (n % (len - 1) == 0) {
		n = len - 1;
	}
	else
	{
		n %= (len - 1);
	}

	Item* new_head = ListGetTail(list);
	Item* prev = new_head;

	for (int i = 0; i <(int)n - 1; ++i) {
		prev = ListGetTail(prev);
	}
	list->next = prev->next;
	prev->next = list;

	return new_head;
}