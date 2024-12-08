#include <stdlib.h>
#include <string.h>

extern char* trim(const char* s) {

	if (s == NULL) {
		return NULL;
	}

	size_t s_len = strlen(s) - 1;
	if (s_len == 0) {
		char* res = malloc(sizeof(char));
		res[0] = 0;
		return res;
	}
	while (s[s_len] == ' ') {
		--s_len;
		if (s_len == 0) {
			char* res = malloc(sizeof(char));
			res[0] = 0;
			return res;
		}
	}

	size_t in = 0;
	while (s[in] == ' ')
	{
		++in;
	}

	s_len -= in;
	char* res = malloc((s_len + 2) * sizeof(char));
	size_t i = 0;
	while (i < s_len + 1) {
		res[i] = s[in];
		++i;
		++in;
	}

	res[i] = 0;

	return res;
}