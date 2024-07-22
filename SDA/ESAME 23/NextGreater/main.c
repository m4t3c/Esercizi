#include "next_greater.h"

int main(void) {

	ElemType arr[] = { 30, 1, 1, 1, 1, 1, 1, 1, 7, 6, 4, 8, 21, 12, 5, 6 };
	size_t size = sizeof(arr) / sizeof(arr[0]);

	Item* l1 = ListCreateEmpty();

	for (size_t i = 0; i < size; ++i) {
		l1 = ListInsertBack(l1, arr + i);
	}

	ListWriteStdout(l1);

	size_t answer_size = 0;

	ElemType* res = NextGreater(l1, &answer_size);

	ListDelete(l1);

	return 0;
}