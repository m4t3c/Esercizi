#include "list.h"

Item* PariDispari(Item* i) {

	if (ListIsEmpty(i)) {
		return NULL;
	}

	Item* pari_head = NULL;
	Item* pari_curr = NULL;
	Item* dispari_head = NULL;
	Item* dispari_curr = NULL;

	Item* curr = i;
	while (!ListIsEmpty(curr)) {
		if (curr->value % 2 == 0) {
			if (pari_head == NULL) {
				pari_head = curr;
				pari_curr = curr;
			}
			else
			{
				pari_curr->next = curr;
				pari_curr = curr;
			}
		}
		else {
			if (dispari_head == NULL) {
				dispari_head = curr;
				dispari_curr = curr;
			}
			else
			{
				dispari_curr->next = curr;
				dispari_curr = curr;
			}
		}
		curr = ListGetTail(curr);
	}

	if (dispari_head == NULL) {
		return pari_head;
	}
	else if (pari_head == NULL) {
		return dispari_head;
	}
	else
	{
		pari_curr->next = dispari_head;
		dispari_curr->next = NULL;
		return pari_head;
	}
}