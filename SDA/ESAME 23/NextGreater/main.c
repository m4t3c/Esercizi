#include "next_greater.h"

int main(void) {

	ElemType arr[] = { 2, 3, 1, 4, 7, 2 };

	Item* i = ListCreateEmpty();
	for (size_t j = 0; j < 6; ++j) {
		i = ListInsertBack(i, &arr[j]);
	}

	size_t answer_size = 0;
	ElemType* res = NextGreater(i, &answer_size);

	return 0;
}