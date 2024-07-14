#include "list.h"

/*Item* InsertOrd(const ElemType* e, Item* i) {

	if (ListIsEmpty(i) || ElemCompare(ListGetHeadValue(i), e) >= 0) {
		return ListInsertHead(e, i);
	}

	Item* new_item = ListInsertHead(e, ListCreateEmpty());
	Item* head = i;
	Item* prev = NULL;

	while (!ListIsEmpty(i) && ElemCompare(ListGetHeadValue(i), e) < 0) {
		prev = i;
		i = ListGetTail(i);
	}

	prev->next = new_item;
	new_item->next = i;

	return head;
}*/

Item* InsertOrd(const ElemType* e, Item* i) {

	if (ListIsEmpty(i) || ElemCompare(ListGetHeadValue(i), e) >= 0) {
		return ListInsertHead(e, i);
	}

	Item* new;
	new = ListInsertHead(ListGetHeadValue(i), InsertOrd(e, ListGetTail(i)));

	ElemDelete(&i->value);
	ListDelete(i);

	return new;
}