#include "list.h"

extern Item* BucketSort(Item *l);

int main(void) {
	
	int arr[] = { 1, 2, 5, 4 };
	Item* l = ListCreateEmpty();
	for (size_t i = 0; i < 4; ++i) {
		l = ListInsertBack(l, &arr[i]);
	}

	Item* res = BucketSort(l);

	return 0;
}