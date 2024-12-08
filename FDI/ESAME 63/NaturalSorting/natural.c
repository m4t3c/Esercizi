#include <stdlib.h>

int strcmp_natural(const char* a, const char* b) {
	if (a == NULL || b == NULL) {
		return 0;
	}

	size_t size_a = sizeof(a);
	size_t size_b = sizeof(b);

	if (size_a < size_b) {
		return -1;
	}
	else if (size_a > size_b) {
		return 1;
	}
	else {
		for (size_t i = 0; i < size_a; ++i) {
			if (a[i] >= '1' && a[i] <= '9' && b[i] >= '1' && b[i] <= '9') {
				char* endptr = 0;
				int an = strtol(a + i, &endptr, 10);
				int bn = strtol(b + i, &endptr, 10);
				if (an < bn) {
					return -1;
				}
				if (an > bn) {
					return 1;
				}
			}
			else if (a[i] < b[i]) {
				return -1;
			}
			else if (a[i] > b[i])
			{
				return 1;
			}
		}
	}

	return 0;
}