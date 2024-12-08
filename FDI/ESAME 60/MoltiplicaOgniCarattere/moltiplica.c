#include <stdlib.h>
#include <string.h>

extern char* moltiplica_caratteri(const char* s, int n) {

	if (s == NULL || n <= 0) {
		return NULL;
	}

	size_t slen = strlen(s);
	char* res = malloc(slen * n + 1);
	size_t index = 0;

	for (size_t i = 0; i < slen; ++i) {
		for (int j = 0; j < n; ++j) {
			res[index] = s[i];
			++index;
		}
	}

	res[index] = 0;
	
	return res;
}