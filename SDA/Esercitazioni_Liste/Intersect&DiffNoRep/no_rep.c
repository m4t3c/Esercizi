#include "list.h"

static bool IsThere(const ElemType* e, const Item* i) {
	for (const Item* tmp = i; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {
		if (ElemCompare(ListGetHeadValue(tmp), e) == 0) {
			return true;
		}
	}

	return false;
}
static bool IsUsed(Item* i, const ElemType* e) {
	for (Item* tmp = i; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {
		if (ElemCompare(ListGetHeadValue(tmp), e) == 0) {
			return true;
		}
	}

	return false;
}

Item* IntersectNoRep(const Item* i1, const Item* i2) {

	Item* res = ListCreateEmpty();
	for (const Item* tmp1 = i1; !ListIsEmpty(tmp1); tmp1 = ListGetTail(tmp1)) {
		for (const Item* tmp2 = i2; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)) {
			if (ElemCompare(ListGetHeadValue(tmp1), ListGetHeadValue(tmp2)) == 0) {
				if (!IsUsed(res, ListGetHeadValue(tmp1))) {
					res = ListInsertBack(res, ListGetHeadValue(tmp1));
				}
			}
		}
	}

	return res;
}
Item* DiffNoRep(const Item* i1, const Item* i2) {

	Item* res = ListCreateEmpty();
	for (const Item* tmp = i1; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {
		if (!IsThere(ListGetHeadValue(tmp), i2)) {
			if (!IsUsed(res, ListGetHeadValue(tmp))) {
				res = ListInsertBack(res, ListGetHeadValue(tmp));
			}
		}
	}
	
	return res;
}