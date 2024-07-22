#include "reverse.h"

Item* ReverseLinks(Item* list) {
	Item* prev = NULL;
	Item* curr = list;

	while (!ListIsEmpty(curr))
	{
		Item* next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	return prev;
}

int ListGetLen(Item* i) {
	int res = 0;
	while (!ListIsEmpty(i))
	{
		++res;
		i = ListGetTail(i);
	}

	return res;
}

Item* Reverse(Item* list, int right) {

	int len = ListGetLen(list);

	if (right <= 1) {
		return list;
	}
	if (right >= len) {
		return ReverseLinks(list);
	}
	Item* end = list;
	for (int i = 1; i < right; ++i) {
		end = ListGetTail(end);
	}
	Item* tmp = end->next;
	end->next = NULL;
	end = ReverseLinks(list);
	list->next = tmp;

	return end;
}