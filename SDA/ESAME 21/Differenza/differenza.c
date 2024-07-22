#include "differenza.h"

Item* Differenza(const Item* i1, const Item* i2) {

	if (ListIsEmpty(i1) && ListIsEmpty(i2)) {
		return ListCreateEmpty();
	}

	Item* res = ListCreateEmpty();
	char p = 0;

	while (!ListIsEmpty(i1)) {

		char minuendo = i1->value - p;
		char sottraendo = '0';
		char diff = '0';
		p = 0;

		if (!ListIsEmpty(i2)) {
			sottraendo = i2->value;
		}

		if (sottraendo > minuendo) {
			minuendo += 10;
			p = 1;
		}

		diff = minuendo - sottraendo + '0';
		res = ListInsertBack(res, &diff);

		i1 = ListGetTail(i1);
		if (!ListIsEmpty(i2)) {
			i2 = ListGetTail(i2);
		}
	}

	return res;
}