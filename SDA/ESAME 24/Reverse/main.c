#include "reverse.h"

int main(void) {

	ElemType arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	Item* i = ListCreateEmpty();

	for (size_t j = 0; j < 9; ++j) {
		i = ListInsertBack(i, &arr[j]);
	}

	ListWriteStdout(i);
	Item* res = Reverse(i, 3);
	ListWriteStdout(res);

	return 0;
}