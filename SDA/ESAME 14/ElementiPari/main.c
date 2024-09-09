#include "list.h"

extern Item* ElementiPari(const Item* i);

int main(void) {

	ElemType arr[] = { 7, 2, 5, 8, 6, 4 };
	Item* i = ListCreateEmpty();
	for (size_t j = 0; j < 6; ++j) {
		i = ListInsertBack(i, &arr[j]);
	}

	ListWriteStdout(i);

	Item* res = ElementiPari(i);

	ListWriteStdout(res);

	return 0;
}