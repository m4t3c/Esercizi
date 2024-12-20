#include "list.h"
#include <math.h>

Item* CreaDaInterni(const Item* i, double r) {

	Item* res = ListCreateEmpty();
	for (const Item* tmp = i; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {
		if (sqrt(pow(tmp->value.x, 2) + pow(tmp->value.y, 2)) <= r) {
			res = ListInsertBack(res, &tmp->value);
		}
	}
	return res;
}