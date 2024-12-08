#include "list.h"

const Item* CommonTail(const Item* i1, const Item* i2) {

	for (const Item* tmp1 = i1; !ListIsEmpty(tmp1); tmp1 = ListGetTail(tmp1)) {
		for (const Item* tmp2 = i2; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)) {
			if (&tmp1->value == &tmp2->value) {
				return tmp1;
			}
		}
	}

	return NULL;
}