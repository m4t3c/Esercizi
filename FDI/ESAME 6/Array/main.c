#include "array.h"

int main(void) {

	double arr[] = { 2, 4, 6, 7, 4, 3 };
	size_t pn = 6;
	array_remove(arr, &pn, 3);

	return 0;
}