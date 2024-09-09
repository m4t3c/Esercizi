#include "list.h"

Item* IntersectNoRep(const Item* i1, const Item* i2) {
	Item* res = ListCreateEmpty();
	for (const Item* tmp1 = i1; !ListIsEmpty(tmp1); tmp1 = ListGetTail(tmp1)) {
		for (const Item* tmp2 = i2; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)) {
			if (ElemCompare(ListGetHeadValue(tmp1), ListGetHeadValue(tmp2)) == 0) {
				bool rep = false;
				for (const Item* tmp3 = res; !ListIsEmpty(tmp3); tmp3 = ListGetTail(tmp3)) {
					if (ElemCompare(ListGetHeadValue(tmp1), ListGetHeadValue(tmp3)) == 0) {
						rep = true;
					}
				}
				if (!rep) {
					res = ListInsertBack(res, ListGetHeadValue(tmp1));
				}
				else
				{
					rep = false;
				}
			}
		}
	}

	return res;
}
Item* DiffNoRep(const Item* i1, const Item* i2) {
	Item* res = ListCreateEmpty();
	for (const Item* tmp1 = i1; !ListIsEmpty(tmp1); tmp1 = ListGetTail(tmp1)) {
		bool check = false;
		for (const Item* tmp2 = i2; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)) {
			if (ElemCompare(ListGetHeadValue(tmp1), ListGetHeadValue(tmp2)) == 0) {
				check = true;
			}
		}
		if (!check) {
			bool rep = false;
			for (const Item* tmp3 = res; !ListIsEmpty(tmp3); tmp3 = ListGetTail(tmp3)) {
				if (ElemCompare(ListGetHeadValue(tmp1), ListGetHeadValue(tmp3)) == 0) {
					rep = true;
				}
			}
			if (!rep) {
				res = ListInsertBack(res, ListGetHeadValue(tmp1));
			}
			else
			{
				rep = false;
			}
		}
		else
		{
			check = false;
		}
	}

	return res;
}