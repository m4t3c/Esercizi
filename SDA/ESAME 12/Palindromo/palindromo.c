#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

static void IsPalindromoRec(const char* str, size_t l, size_t i, bool* res) {

	if (i == l / 2 - 1) {
		return;
	}

	if (str[i] != str[l - i - 1]) {
		*res = false;
		return;
	}

	IsPalindromoRec(str, l, i + 1, res);
}

bool IsPalindromo(const char* str) {
	
	if (str == NULL) {
		return false;
	}

	size_t l = strlen(str);
	if (l == 0) {
		return true;
	}
	bool res = true;
	IsPalindromoRec(str, l, 0, &res);

	return res;
}