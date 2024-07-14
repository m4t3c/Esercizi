#include "list.h"

extern void Back2Front(Item** i) {

	Item* prev = *i;
	Item* curr = ListGetTail(prev);
	while (curr->next != NULL) {
		prev = ListGetTail(prev);
		curr = ListGetTail(curr);
	}

	curr->next = *i;
	prev->next = NULL;
	*i = curr;
}