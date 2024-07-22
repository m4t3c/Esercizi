#include <stdlib.h>

static int BinarySearchRec(const int* v, int first, int last, int target) {

	if (first > last) {
		return -1;
	}

	int mid = (first + last) / 2;
	int middle = v[mid];
	if (target == middle) {
		return mid;
	}
	else if (target > middle) {
		return BinarySearchRec(v, mid + 1, last, target);
	}
	else
	{
		return BinarySearchRec(v, first, mid - 1, target);
	}

}

int BinarySearch(const int* v, size_t v_size, int value) {

	if (v == NULL) {
		return -1;
	}

	return BinarySearchRec(v, 0, (int)v_size - 1, value);
}