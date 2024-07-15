#include <stdlib.h>
#include <string.h>

void translate(char* str, const char* from, const char* to) {

	if (str == NULL || from == NULL || to == NULL || strlen(from) != strlen(to)) {
		return;
	}

	for (size_t i = 0; str[i] != 0; ++i) {

		for (size_t j = 0; from[j] != 0; ++j) {
			if (str[i] == from[j]) {
				str[i] = to[j];
				break;
			}
		}
	}
}