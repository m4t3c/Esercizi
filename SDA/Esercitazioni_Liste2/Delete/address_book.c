#include "list.h"

Item* Delete(Item* i, const char* name) {
	if (!i) {
		return i;
	}
	
	if (strcmp(i->value.name, name) == 0) {
		Item* ret = i->next;
		ElemDelete(&i->value);
		return ret;
	}

	Item* tmp = i;

	while (!ListIsEmpty(tmp)) {
		if (strcmp(tmp->next->value.name, name) == 0) {
			Item* to_be_deleted = tmp->next;
		}
	}

}