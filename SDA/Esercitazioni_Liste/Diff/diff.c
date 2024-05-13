#include "list.h"

Item* Diff(const Item* i1, const Item* i2) {
	Item* res = ListCreateEmpty();
	for (const Item* tmp = i1; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {
		const Item* tmp2 = i2;
		for (; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)) {
			if (ElemCompare(ListGetHeadValue(tmp), ListGetHeadValue(tmp2)) == 0) {
				break;
			}
		}
		if (ListIsEmpty(tmp2)) {
			res = ListInsertBack(res, ListGetHeadValue(tmp));
		}
	}

	return res;
}