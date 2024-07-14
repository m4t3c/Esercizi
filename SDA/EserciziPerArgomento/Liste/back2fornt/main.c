#include "list.h"

extern void Back2Front(Item** i);

int main(void) {

	ElemType data[] = { 1, 2, 3, 4 };
	Item* i = ListCreateEmpty();

	for (size_t j = 0; j < 4; ++j) {
		i = ListInsertBack(i, &data[j]);
	}

	Back2Front(&i);

	ListWriteStdout(i);

	return 0;
}