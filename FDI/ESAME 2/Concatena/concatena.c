#include <stdlib.h>
#include <string.h>

extern char* concatena(const char* s1, const char* s2) {

	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);

	char* res = calloc(s1_len + s2_len + 1, sizeof(char));

	size_t i = 0;
	for (; i < s1_len; ++i) {
		res[i] = s1[i];
	}

	for (size_t j = 0; j < s2_len; ++j) {
		res[i] = s2[j];
		++i;
	}

	return res;
}