#include "remove.h"

int main(void) {

	ElemType arr[] = { 2, 2, 5, 6, 6, 10, 11, 14 };

	Item* i = ListCreateEmpty();
	for (size_t j = 0; j < 8; ++j) {
		i = ListInsertBack(i, &arr[j]);
	}

	ListWriteStdout(i);
	Item* res = RemoveDuplicates(i);
	ListWriteStdout(res);
	
	return 0;
}