#include "list.h"

extern Item* Reverse(Item* i);

int main(void) {

	ElemType arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	Item* i = ListCreateEmpty();

	for (size_t j = 0; j < 8; ++j) {
		i = ListInsertBack(i, &arr[j]);
	}

	ListWriteStdout(i);

	Item* res = Reverse(i);

	ListWriteStdout(res);

	return 0;
}