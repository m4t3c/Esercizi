#include "list.h"

Item* Intersect(const Item* i1, const Item* i2);

int main(void) {

	Item* i1 = ListCreateEmpty();
	int data1[] = { 3, 4, 2, 0, 45, 1, 3 };
	for (size_t i = 0; i < 7; ++i) {
		i1 = ListInsertBack(i1, &data1[i]);
	}

	Item* i2 = ListCreateEmpty();
	int data2[] = { 8, 5, 2, 3, 45, 7 };
	for (size_t i = 0; i < 6; i++)
	{
		i2 = ListInsertBack(i2, &data2[i]);
	}

	Item* res = Intersect(i1, i2);
	ListWriteStdout(res);

	return 0;
}