#include "list.h"

extern Item* PariDispari(Item* i);

int main(void) {

	ElemType arr[] = { 3, 556, 1, 22, 12, 5, 28, 40, 32, 7, 8, 2 };
	Item* i = ListCreateEmpty();

	for (size_t j = 0; j < 12; ++j) {
		i = ListInsertBack(i, &arr[j]);
	}

	ListWriteStdout(i);
	Item* res = PariDispari(i);
	ListWriteStdout(res);

	return 0;
}