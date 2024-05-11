#include "array.h"

int main(void) {

	double arr1[] = { 2, 5, 6, 7 };
	double arr2[] = { 5, 6, 3, 2 };

	double* res = array_somma(arr1, arr2, 4);

	return 0;
}