#include <stdlib.h>
#include <string.h>

static void ReverseStringRec(const char* str, char* res, size_t slen, size_t i) {

	if (slen == 0) {
		res[i] = str[slen];
		res[i + 1] = 0;
		return;
	}

	res[i] = str[slen];

	ReverseStringRec(str, res, slen - 1, i + 1);
}

char* ReverseString(const char* str) {

	if (str == NULL) {
		return NULL;
	}

	size_t slen = strlen(str);
	if (slen == 0) {
		char* res = malloc(1);
		res[0] = 0;
		return res;
	}
	char* res = malloc((slen + 1) * sizeof(char));
	ReverseStringRec(str, res, slen - 1, 0);

	return res;
}