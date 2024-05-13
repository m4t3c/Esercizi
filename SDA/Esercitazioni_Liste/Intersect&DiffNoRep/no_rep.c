#include "list.h"
#include <stdlib.h>

Item* IntersectNoRep(const Item* i1, const Item* i2) {
	Item* tmp_res = ListCreateEmpty();
	for (const Item* tmp1 = i1; !ListIsEmpty(tmp1); tmp1 = ListGetTail(tmp1)) {
		for (const Item* tmp2 = i2; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)) {
			if (ElemCompare(ListGetHeadValue(tmp1), ListGetHeadValue(tmp2)) == 0) {
				tmp_res = ListInsertBack(tmp_res, ListGetHeadValue(tmp1));
				break;
			}
		}
	}
	
}
Item* DiffNoRep(const Item* i1, const Item* i2) {

}