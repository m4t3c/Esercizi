#include "diff_dlist.h"

const Item* ListGetLast(const Item* i) {

	if (DListIsEmpty(i)) {
		return NULL;
	}

	while (!DListIsEmpty(DListGetTail(i))) {
		i = DListGetTail(i);
	}

	return i;
}

Item* DListDiff(const Item* i1, const Item* i2) {

	Item* res = DListCreateEmpty();
	i1 = ListGetLast(i1);
	i2 = ListGetLast(i2);

	int p = 0;
	int min = 0;
	int sott = 0;
	int diff = 0;

	while (!DListIsEmpty(i1)) {
		min = i1->value - p;
		p = 0;
		sott = 0;
		if (!DListIsEmpty(i2))
		{
			sott = i2->value;
		}
		if (min < sott) {
			++p;
			min += 10;
		}
		diff = min - sott;
		res = DListInsertHead(&diff, res);
		i1 = DListGetPrev(i1);
		if (!DListIsEmpty(i2)) {
			i2 = DListGetPrev(i2);
		}
	}

	return res;
}