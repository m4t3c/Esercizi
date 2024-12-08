#include "list.h"

int ListOccorrenze(const Item* i, const ElemType* e) {

	int res = 0;

	while (!ListIsEmpty(i)) {
		if (ElemCompare(ListGetHeadValue(i), e) == 0) {
			++res;
		}
		i = ListGetTail(i);
	}

	return res;
}