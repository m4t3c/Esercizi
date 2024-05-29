#include "list.h"
#include <stdlib.h>

Item* Intersect(const Item* i1, const Item* i2) {
	Item* res = ListCreateEmpty();
	for (const Item* tmp = i1; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) { //devo mettere const perchè sennò potrei modificare dopo una cosa const
		for (const Item* tmp2 = i2; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)) {
			if (ElemCompare(ListGetHeadValue(tmp), ListGetHeadValue(tmp2)) == NULL) {
				res = ListInsertBack(res, ListGetHeadValue(tmp));
				break;
			}
		}
	}

	return res;
}