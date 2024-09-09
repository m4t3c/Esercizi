#include "reverse.h"

static Item* ReverseLinks(Item* i) {
	Item* prev = NULL;
	Item* curr = i;

	while (!ListIsEmpty(curr)) {
		Item* next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	return prev;
}

static int ListGetLen(Item* list) {

	int res = 0;
	while (!ListIsEmpty(list)) {
		++res;
		list = ListGetTail(list);
	}

	return res;
}

Item* Reverse(Item* list, int right) {

	if (right <= 1) {
		return list;
	}

	int len = ListGetLen(list);
	
	if (right >= len) {
		return ReverseLinks(list);
	}

	Item* end = list;
	for (int i = 1; i < right % len; ++i) {
		end = ListGetTail(end);
	}
	Item* tmp = end->next;
	end->next = NULL;
	end = ReverseLinks(list);
	list->next = tmp;
	 
	return end;
}