#include <stdlib.h>

static int BinarySearchRec(const int* v, int first, int last, int value) {

	if (first > last) {
		return -1;
	}

	int middle = (last + first) / 2;
	int middlev = v[middle];

	if (value == middlev) {
		return middle;
	}
	else if (middlev < value) {
		return BinarySearchRec(v, middle + 1, last, value);
	}
	else
	{
		return BinarySearchRec(v, first, middle - 1, value);
	}
}

int BinarySearch(const int* v, size_t v_size, int value) {
	
	if (v == NULL) {
		return -1;
	}

	return BinarySearchRec(v, 0, (int)v_size - 1, value);
}