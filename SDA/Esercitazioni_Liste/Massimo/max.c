#include "list.h"

const ElemType* MaxElement(const Item* i) {

	if (ListIsEmpty(i)) {
		return NULL;
	}

	const ElemType *res = ListGetHeadValue(i);
	i = ListGetTail(i);
	while (!ListIsEmpty(i)) {
		if (ElemCompare(ListGetHeadValue(i), res) > 0) {
			res = ListGetHeadValue(i);
		}
		i = ListGetTail(i);
	}

	return res;
}