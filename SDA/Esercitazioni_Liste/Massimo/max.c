#include "list.h"
#include <stdlib.h>

const ElemType* MaxElement(const Item* i) {
	const ElemType* res = NULL;

	for (const Item* tmp_l = i; !ListIsEmpty(tmp_l); tmp_l = ListGetTail(tmp_l)) {
		if (res == NULL || ElemCompare(ListGetHeadValue(tmp_l), res) > 0) {
			res = ListGetHeadValue(tmp_l);
		}
	}

	return res;
}