#include "shift.h"

Item* ListCreateFromVector(const ElemType* arr, size_t n) {

	Item* l = ListCreateEmpty();

	for (size_t i = 0; i < n; ++i) {
		l = ListInsertBack(l, &arr[i]);
	}

	return l;
}

int main(void) {

	ElemType arr[] = {0, 1, 2, 3};
	Item* l = ListCreateFromVector(arr, 4);

	Item* res = ShiftN(l, 2);
	ListWriteStdout(res);

	return 0;
}