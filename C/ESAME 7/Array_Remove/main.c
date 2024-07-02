#include "array.h"

int main(void) {

	double arr[] = { 3, 5, 6, 7, 34, 2, 33, 1, 244 };
	double* res = array_remove(arr, 9, 5);

	return 0;
}