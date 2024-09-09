#include "list.h"

Item* Reverse(Item* i) {

	Item* prev = NULL;
	Item* curr = i;
	Item* next = NULL;

	while (!ListIsEmpty(curr)) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	return prev;
}