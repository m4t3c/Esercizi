#include "list.h"
#include <stdbool.h>

bool AnyLoop(const Item* i) {

	const Item* t = i;
	const Item* l = i;
	while (!ListIsEmpty(t) && !ListIsEmpty(l)) {
		t = t->next;
		l = l->next->next;

		if (t == l) {
			return true;
		}
	}

	return false;
}