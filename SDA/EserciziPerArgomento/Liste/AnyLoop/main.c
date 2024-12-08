#include "list.h"
#include <stdbool.h>

extern bool AnyLoop(const Item* i);

int main(void) {

	ElemType v[] = { 12, 99, 37 };
	bool l;

	Item* i = ListInsertHead(v, ListInsertHead(v + 1, ListInsertHead(v + 2, NULL)));
	i->next->next->next = i->next->next;

	l = AnyLoop(i);

	return 0;
}