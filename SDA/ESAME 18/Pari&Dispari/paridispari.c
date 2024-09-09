#include "list.h"

Item* PariDispari(Item* i) {
	
	if (ListIsEmpty(i)) {
		return NULL;
	}

	Item* pari_head = NULL;
	Item* pari_tail = NULL;
	Item* dispari_head = NULL;
	Item* dispari_tail = NULL;

	Item* current = i;
	while (!ListIsEmpty(current)) {
		if (current->value % 2 == 0) {
			if (pari_head == NULL) {
				pari_head = current;
				pari_tail = current;
			}
			else
			{
				pari_tail->next = current;
				pari_tail = current;
			}
		}
		else
		{
			if (dispari_head == NULL) {
				dispari_head = current;
				dispari_tail = current;
			}
			else
			{
				dispari_tail->next = current;
				dispari_tail = current;
			}
		}
		current = ListGetTail(current);
	}

	if (dispari_head == NULL) {
		return pari_head;
	}
	else if (pari_head == NULL)
	{
		return dispari_head;
	}
	else
	{
		pari_tail->next = dispari_head;
		dispari_tail->next = NULL;
		return pari_head;
	}
}
