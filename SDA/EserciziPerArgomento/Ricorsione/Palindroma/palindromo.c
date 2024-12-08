#include <string.h>
#include <stdbool.h>

bool IsPalindromoRec(const char* str, int start, int end) {

	if (start >= end) {
		return true;
	}

	if (str[start] == str[end]) {
		return IsPalindromoRec(str, start + 1, end - 1);
	}
	else
	{
		return false;
	}
}

bool IsPalindromo(const char* str) {

	if (str == NULL) {
		return false;
	}

	return IsPalindromoRec(str, 0, (int)strlen(str) - 1);
}