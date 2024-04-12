#include <stdlib.h>
#include <string.h>

void ToUpper(char* str) {

	if (str == NULL) {
		return;
	}

	size_t s_len = strlen(str);

	for (size_t i = 0; i < s_len; ++i) {
		if (*(str + i) >= 97 && *(str + i) <= 122) {
			*(str + i) = *(str + i) - 32;
		}
	}

}