#include "diff_dlist.h"

static const Item* DListGetLast(const Item* i) {

	if (DListIsEmpty(i)) {
		return NULL;
	}

	const Item* res = i;

	while (res->next != NULL) {
		res = DListGetTail(res);
	}

	return res;
}

Item* DListDiff(const Item* i1, const Item* i2) {

	if (DListIsEmpty(i1) && DListIsEmpty(i2)) {
		return DListCreateEmpty();
	}

	const Item* l1 = DListGetLast(i1);
	const Item* l2 = DListGetLast(i2);
	Item* res = DListCreateEmpty();
	ElemType p = 0;
	ElemType v1 = 0;
	ElemType v2 = 0;

	while (!DListIsEmpty(l1)) {

		v1 = l1->value - p;
		p = 0;
		if (DListIsEmpty(l2)) {
			v2 = 0;
		}
		else
		{
			v2 = l2->value;
		}

		if (v1 - v2 < 0) {
			v1 += 10;
			p = 1;
		}

		ElemType diff = v1 - v2;
		res = DListInsertHead(&diff, res);

		if (!DListIsEmpty(l2)) {
			l2 = DListGetPrev(l2);
		}

		l1 = DListGetPrev(l1);

	}

	return res;

}