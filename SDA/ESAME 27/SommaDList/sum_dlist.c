#include "sum_dlist.h"

const Item* ListGetLast(const Item* i) {

	const Item* res = i;

	while (res->next != NULL) {
		res = DListGetTail(res);
	}

	return res;
}

Item* DListSum(const Item* i1, const Item* i2) {

	if (DListIsEmpty(i1)) {
		Item* res = DListCreateEmpty();
		while (!DListIsEmpty(i2))
		{
			res = DListInsertBack(res, DListGetHeadValue(i2));
			i2 = DListGetTail(i2);
		}
		return res;
	}
	if (DListIsEmpty(i2)) {
		Item* res = DListCreateEmpty();
		while (!DListIsEmpty(i1))
		{
			res = DListInsertBack(res, DListGetHeadValue(i1));
			i1 = DListGetTail(i1);
		}
		return res;
	}

	i1 = ListGetLast(i1);
	i2 = ListGetLast(i2);
	Item* res = DListCreateEmpty();
	ElemType p = 0;

	while (!DListIsEmpty(i1) || !DListIsEmpty(i2))
	{
		ElemType a = 0;
		ElemType b = 0;
		if (!DListIsEmpty(i1)) {
			a = i1->value;
		}
		if (!DListIsEmpty(i2)) {
			b = i2->value;
		}
		ElemType tmp = a + b + p;
		p = 0;
		if (tmp >= 10) {
			tmp -= 10;
			p += 1;
		}
		const ElemType num = tmp;
		res = DListInsertHead(&num, res);
		if (!DListIsEmpty(i1)) {
			i1 = DListGetPrev(i1);
		}
		if (!DListIsEmpty(i2)) {
			i2 = DListGetPrev(i2);
		}
	}

	if (p) {
		res = DListInsertHead(&p, res);
	}

	return res;
}