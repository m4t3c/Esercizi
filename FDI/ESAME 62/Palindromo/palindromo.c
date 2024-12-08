#include <stdbool.h>
#include <stdio.h>

bool palindromo(unsigned long long x) {

	char str[21];
	int length = snprintf(str, sizeof(str), "%llu", x);

	for (int i = 0; i < length / 2; ++i) {
		if (str[i] != str[length - i - 1]) {
			return false;
		}
	}

	return true;
}