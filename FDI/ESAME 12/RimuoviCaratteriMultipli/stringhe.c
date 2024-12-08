#include <stdlib.h>
#include <string.h>

extern char* rimuovimultipli(const char* str) {
	if (str == NULL) {
		return NULL;
	}
	if (str[0] == 0) {
		char* res = malloc(sizeof(char));
		return res;
	}
	size_t str_len = strlen(str);
	size_t final_len = str_len;
	size_t i = 0;
	for (; i < str_len; ++i) {
		if (str[i] == str[i - 1]) {
			--final_len;
		}
	}
	i = 0;
	size_t j = 0;
	char* res = malloc(final_len + 1 * sizeof(char));
	while (str[i] != 0) {
		if (str[i] == str[i - 1]) {
			++i;
			continue;
		}
		res[j] = str[i];
		++i;
		++j;
	}

	res[j] = 0;
	return res;
}