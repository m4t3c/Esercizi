#include "list.h"

const ElemType* MaxElement(const Item* i) {

	const ElemType* res = NULL;
	while (!ListIsEmpty(i)) {
		if (res == NULL || ElemCompare(res, ListGetHeadValue(i)) < 0) {
			res = &i->value;
		}
		i = ListGetTail(i);
	}

	return res;
}