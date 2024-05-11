#include <stdlib.h>
#include <string.h>

extern char* cerca_primo(char* s, const char* list) {

	size_t len1 = strlen(s);
	size_t len2 = strlen(list);

	if (len1 == 0 || len2 == 0) {
		return NULL;
	}

	for (size_t i = 0; i < len1; ++i) {
		for (size_t j = 0; j < len2; ++j) {
			if (s[i] == list[j]) {
				return s + i;
			}
		}
	}

	return NULL;
}