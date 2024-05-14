#include "list.h"
#include <stdlib.h>

Item* IntersectNoRep(const Item* i1, const Item* i2) {
	Item* res = ListCreateEmpty();
	for (const Item* tmp1 = i1; !ListIsEmpty(tmp1); tmp1 = ListGetTail(tmp1)) {
		const Item* tmp2 = i2;
		for (; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)) {
			if (ElemCompare(ListGetHeadValue(tmp1), ListGetHeadValue(tmp2)) == 0) {
				break;
			}	
		}
		if (!ListIsEmpty(tmp2)) {
			const Item* tmp3 = res;
			for (; !ListIsEmpty(tmp3); tmp3 = ListGetTail(tmp3)) {
				if (ElemCompare(ListGetHeadValue(tmp1), ListGetHeadValue(tmp3)) == 0) {
					break;
				}
			}
			if (ListIsEmpty(tmp3)) {
				res = ListInsertBack(res, ListGetHeadValue(tmp1));
			}
		}
	}
	
	return res;
}
Item* DiffNoRep(const Item* i1, const Item* i2) {
	Item* res = ListCreateEmpty();
	for (const Item* tmp1 = i1; !ListIsEmpty(tmp1); tmp1 = ListGetTail(tmp1)) {
		const Item* tmp2 = i2;
		for (; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)) {
			if (ElemCompare(ListGetHeadValue(tmp1), ListGetHeadValue(tmp2)) == 0) {
				break;
			}
		}
		if (ListIsEmpty(tmp2)) {
			const Item* tmp3 = res;
			for (; !ListIsEmpty(tmp3); tmp3 = ListGetTail(tmp3)) {
				if (ElemCompare(ListGetHeadValue(tmp1), ListGetHeadValue(tmp3)) == 0) {
					break;
				}
			}
			if (ListIsEmpty(tmp3)) {
				res = ListInsertBack(res, ListGetHeadValue(tmp1));
			}
		}
	}

	return res;
}