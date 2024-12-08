#include <stdlib.h>
#include <string.h>

char* sottrai_stringhe(const char* a, const char* b) {
	if (a == NULL || b == NULL) {
		return NULL;
	}

	if (strcmp(a, b) == 0) {
		char* res = malloc(2 * sizeof(char));
		res[0] = '0';
		res[1] = '\0';
		return res;
	}

	char *endptr = 0;
	int a_n = strtol(a, &endptr, 10);
	int b_n = strtol(b, &endptr, 10);
	int diff = a_n - b_n;
	int tmp = diff;
	size_t size = 0;

	while (tmp != 0) {
		++size;
		tmp /= 10;
	}

	char* res = malloc(size + 1 * sizeof(char));

	for (size_t i = 0; i < size; ++i) {
		res[size - 1 - i] = (diff % 10) + '0';
		diff /= 10;
	}

	res[size] = 0;
	
	return res;
}
