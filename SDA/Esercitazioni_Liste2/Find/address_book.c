#include "list.h"

const ElemType* Find(const Item* i, const char* name) {
	
	while (!ListIsEmpty(i)) {
		const ElemType *c = ListGetHeadValue(i);
		if (strcmp(c->name, name) == 0) {
			return c;
		}

		i = ListGetTail(i);
	}

	return NULL;
}