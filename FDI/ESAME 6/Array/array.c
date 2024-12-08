#include "array.h"

void array_remove(double* arr, size_t* pn, size_t pos) {

	if (pos <= *pn) {
		size_t i = pos;
		while (i + 1 != *pn)
		{
			arr[i] = arr[i + 1];
			++i;
		}
		-- * pn;
	}
}