#include "list.h"

Item* Diff(const Item* i1, const Item* i2) {

	Item* res = ListCreateEmpty();
	bool check = false;
	for (const Item* tmp1 = i1; !ListIsEmpty(tmp1); tmp1 = ListGetTail(tmp1)) {
		for (const Item* tmp2 = i2; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)) {
			if (ElemCompare(ListGetHeadValue(tmp1), ListGetHeadValue(tmp2)) == 0) {
				check = true;
			}
		}
		if (!check) {
			res = ListInsertBack(res, ListGetHeadValue(tmp1));
		}
		check = false;
	}

	return res;
}