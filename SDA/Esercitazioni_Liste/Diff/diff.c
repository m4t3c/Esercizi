#include "list.h"

bool IsThere(const ElemType* e, const Item* i) {

	for (const Item* tmp = i; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {
		if (ElemCompare(e, ListGetHeadValue(tmp)) == 0) {
			return true;
		}
	}
	return false;
}

Item* Diff(const Item* i1, const Item* i2) {

	Item* res = ListCreateEmpty();
	for (const Item* tmp = i1; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {

		if (!IsThere(ListGetHeadValue(tmp), i2)) {
			res = ListInsertBack(res, ListGetHeadValue(tmp));
		}
	}

	return res;
}