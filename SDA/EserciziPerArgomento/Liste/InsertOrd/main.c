#include "list.h"

extern Item* InsertOrd(const ElemType* e, Item* i);

int main(void) {

	ElemType data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
	Item* i = ListCreateEmpty();

	i = InsertOrd(data + 1, i);
	i = InsertOrd(data + 6, i);
	i = InsertOrd(data + 4, i);
	i = InsertOrd(data + 11, i);
	i = InsertOrd(data + 3, i);
	i = InsertOrd(data + 5, i);

	ListWriteStdout(i);

	return 0;
}