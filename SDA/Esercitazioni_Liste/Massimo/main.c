#include "list.h"
#include <stdlib.h>

extern const ElemType* MaxElement(const Item* i);

Item *ListCreateFromVector(const ElemType* vec, size_t size) {
	Item* res = ListCreateEmpty();
	for (size_t i = 0; i < size; ++i) {
		res = ListInsertBack(res, &vec[i]);
	}

	return res;
}

int main(void) {

	ElemType vec[] = { 3, 6, 77, 4, 3, 234, 8 };
	size_t size = sizeof(vec) / sizeof(ElemType);
	Item* l = ListCreateFromVector(vec, size);

	const ElemType* r = MaxElement(l);
	ElemWriteStdout(r);

	return 0;
}