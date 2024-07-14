#include <stdlib.h>
#include <string.h>

int is_hex(const char* s) {

	if (s == NULL) {
		return 0;
	}

	size_t s_len = strlen(s);
	if (s_len < 3 || s_len > 10) {
		return 0;
	}

	if (s[0] != '0' || (s[1] != 'x' && s[1] != 'X')) {
		return 0;
	}

	for (size_t i = 2; i < s_len; ++i) {
		if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'F') || (s[i] >= 'a' && s[i] <= 'f')) {
			continue;
		}
		else
		{
			return 0;
		}
	}

	return 1;
}