#include "concatena.h"

static Item* Copy(Item* i, enum ConcType c) {
	if (c == kNoCopy) {
		return i;
	}

	Item* res = ListCreateEmpty();

	for (Item* tmp = i; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {
		res = ListInsertBack(res, ListGetHeadValue(tmp));
	}

	return res;
}

Item* Concatena(Item* i1, Item* i2, enum ConcType c) {

	if (ListIsEmpty(i1) && ListIsEmpty(i2)) {
		return ListCreateEmpty();
	}

	if (ListIsEmpty(i1)) {
		Item* res = Copy(i2, c);
		return res;
	}
	if (ListIsEmpty(i2)) {
		Item* res = Copy(i1, c);
		return res;
	}

	Item* tmp, *res;
	tmp = res = Copy(i1, c);

	while (!ListIsEmpty(ListGetTail(tmp))) {
		tmp = ListGetTail(tmp);
	}

	tmp->next = Copy(i2, c);

	return res;
}
