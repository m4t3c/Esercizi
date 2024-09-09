#include "list.h"

Item* Sum(const Item* i1, const Item* i2) {
	Item* res = ListCreateEmpty();
	int r = 0;
	int v1 = 0;
	int v2 = 0;

	while (!ListIsEmpty(i1) || !ListIsEmpty(i2)) {
		if (!ListIsEmpty(i1)) {
			v1 = i1->value;
		}
		else
		{
			v1 = 0;
		}
		if (!ListIsEmpty(i2)) {
			v2 = i2->value;
		}
		else
		{
			v2 = 0;
		}

		int sum = v1 + v2 + r;
		r = 0;
		if (sum >= 10) {
			r = 1;
			sum -= 10;
		}

		res = ListInsertBack(res, &sum);

		if (!ListIsEmpty(i1)) {
			i1 = ListGetTail(i1);
		}
		if (!ListIsEmpty(i2)) {
			i2 = ListGetTail(i2);
		}
	}

	if (r != 0) {
		res = ListInsertBack(res, &r);
	}

	return res;
}