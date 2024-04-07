#include <stdlib.h>
#include <string.h>

extern char* trim(const char* s) {

	if (s == NULL) {
		return NULL;
	}

	size_t len = strlen(s);
	size_t i = 0;
	while (s[i] == ' ') {
		++i;
	}
	if (i == len) {
		char *res = calloc(1, 1);
		return res;
	}
	size_t e = len;
	while (s[e - 1] == ' ') {
		--e;
	}
	e -= i;
	char* res = calloc(e + 1, 1);

	size_t j = 0;

	for (; j < e; ++j) {
		res[j] = s[i];
		++i;
	}

	return res;
}