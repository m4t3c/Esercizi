#include "list.h"

extern Item* CreaDaInterni(const Item* i, double r);

int main(void) {

	Point2D p[] = { {3, 6}, {1,2}, {12, 5}, {3, 3}, {10, 11}, {4, 9} };
	Item* i = ListCreateEmpty();
	
	for (size_t j = 0; j < 6; ++j) {
		i = ListInsertBack(i, &p[j]);
	}

	ListWriteStdout(i);
	Item* res = CreaDaInterni(i, 6);
	ListWriteStdout(res);

	return 0;
}