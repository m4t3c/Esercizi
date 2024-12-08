#include "list.h"

Item* ConcatenaN(Item** v, size_t v_size) {
	if (v == NULL || v_size == 0) {
		return ListCreateEmpty();
	}

	Item* head = ListCreateEmpty();
	Item* last = ListCreateEmpty();

	for (size_t i = 0; i < v_size; ++i) {
		if (!ListIsEmpty(v[i])) {
			if (ListIsEmpty(head)) {
				head = v[i];
			}
			else
			{
				last->next = v[i];
			}
			while (!ListIsEmpty(ListGetTail(v[i])))
			{
				v[i] = ListGetTail(v[i]);
			}
			last = v[i];
		}
	}

	return head;
}