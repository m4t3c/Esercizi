#include "paridispari.h"

void paridispari(int* v, size_t n) {

	if (v == NULL) {
		return;
	}

	for (size_t i = 0; i <= n/2; ++i) {
		if (v[i] % 2 != 0) {
			for (size_t j = i + 1; j < n; ++j) {
				if (v[j] % 2 == 0) {
					int tmp = v[i];
					v[i] = v[j];
					v[j] = tmp;
					break;
				}
			}
		}
	}
}