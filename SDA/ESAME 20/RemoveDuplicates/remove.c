#include "list.h"
#include <stdlib.h>

Item* RemoveDuplicates(Item* i) {

	if (ListIsEmpty(i)) {
		return NULL;
	}

	Item* curr = i;

	while (!ListIsEmpty(curr) && !ListIsEmpty(curr->next)) {
		if (curr->value == curr->next->value) {
			Item* tmp = curr->next;
			curr->next = curr->next->next;
			ElemDelete(&tmp->value);
			free(tmp);
		}
		else
		{
			curr = curr->next;
		}
	}

	return i;
}