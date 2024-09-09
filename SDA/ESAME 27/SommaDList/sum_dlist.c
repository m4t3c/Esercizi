#include "sum_dlist.h"

static const Item* DlistGetLast(const Item* i) {

	if (DListIsEmpty(i)) {
		return NULL;
	}

	const Item* res = i;
	while (res->next != NULL) {
		res = DListGetTail(res);
	}

	return res;
}

Item* DListSum(const Item* i1, const Item* i2) {

	if (DListIsEmpty(i1) && DListIsEmpty(i2)) {
		return DListCreateEmpty();
	}

	const Item* l1 = DlistGetLast(i1);
	const Item* l2 = DlistGetLast(i2);

	ElemType v1 = 0;
	ElemType v2 = 0;
	ElemType r = 0;
	Item* res = DListCreateEmpty();

	while (!DListIsEmpty(l1) || !DListIsEmpty(l2)) {
		if (!DListIsEmpty(l1)) {
			v1 = l1->value;
		}
		else
		{
			v1 = 0;
		}

		if (!DListIsEmpty(l2)) {
			v2 = l2->value;
		}
		else
		{
			v2 = 0;
		}

		ElemType sum = v1 + v2 + r;
		r = 0;
		if (sum >= 10) {
			r++;
			sum -= 10;
		}

		res = DListInsertHead(&sum, res);
		
		if (!DListIsEmpty(l1)) {
			l1 = DListGetPrev(l1);
		}
		if (!DListIsEmpty(l2)) {
			l2 = DListGetPrev(l2);
		}

	}

	if (r == 1) {
		res = DListInsertHead(&r, res);
	}

	return res;
}