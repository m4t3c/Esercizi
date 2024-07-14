#include <stdlib.h>
#include <string.h>

int is_date(const char* s) {

	if (s == NULL) {
		return 0;
	}

	size_t slen = strlen(s);
	if (slen != 10) {
		return 0;
	}

	if (s[2] != '/' || s[5] != '/') {
		return 0;
	}
	
	size_t i = 0;
	while (i < slen) {
		if (i == 2 || i == 5) {
			++i;
			continue;
		}
		if (s[i] < '0' || s[i] > '9') {
			return 0;
		}
		++i;
	}

	return 1;
}