#include "list.h"

Item* Filter(Item* i, ElemType e) {

	Item* res = ListCreateEmpty();

	for (Item* tmp = i; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {
		if (ElemCompare(ListGetHeadValue(tmp), &e) < 0) {
			res = ListInsertBack(res, ListGetHeadValue(tmp));
		}
	}
	
	ListDelete(i);
	return 0;
}