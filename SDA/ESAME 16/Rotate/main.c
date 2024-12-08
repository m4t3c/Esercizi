#include "list.h"

extern Item* Rotate(Item* i, int n);

int main(void) {

	int arr[] = { 1, 3, 4, 7, 8 };
	Item* i = ListCreateEmpty();

	for (size_t j = 0; j < 5; ++j) {
		i = ListInsertBack(i, &arr[j]);
	}

	ListWriteStdout(i);
	Item* res = Rotate(i, 2);
	ListWriteStdout(res);

	return 0;
}