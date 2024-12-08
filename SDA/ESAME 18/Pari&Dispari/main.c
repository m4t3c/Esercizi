#include "list.h"

extern Item* PariDispari(Item* i);

int main(void) {

	ElemType arr[] = { 1, 3, 4, 7, 8, -2 };
	Item* l = ListCreateEmpty();
	for (size_t i = 0; i < 6; ++i) {
		l = ListInsertBack(l, &arr[i]);
	}

	ListWriteStdout(l);
	Item* res = PariDispari(l);
	ListWriteStdout(res);

	return 0;
}