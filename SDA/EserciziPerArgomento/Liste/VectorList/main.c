#include "vector_list.h"

int main(void) {

	ElemType v[] = { 2, 4, 11, 1, 21, 23, 5 }, *v2;
	Item* res = Vector2List(v, 7, KInOrder);
	size_t v2_size = 0;
	v2 = List2Vector(res, &v2_size, kReverse);

	ListDelete(res);
	free(v2);

	return 0;
}