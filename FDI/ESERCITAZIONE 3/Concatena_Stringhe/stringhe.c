#include <stdlib.h>

char* concatena(const char* prima, const char* seconda) {
	
	if (prima == NULL || seconda == NULL) {
		return 0;
	}

	size_t n1 = 0;
	size_t n2 = 0;

	while (prima[n1] != 0)
	{
		++n1;
	}

	while (seconda[n2] != 0)
	{
		++n2;
	}

	char* s_res = calloc(1, (n1 + n2 + 1));

	size_t idx = 0;

	for (size_t i = 0; prima[i] != 0; ++i) {
		s_res[idx] = prima[i];
		++idx;
	}

	for (size_t i = 0; seconda[i] != 0; ++i) {
		s_res[idx] = seconda[i];
		++idx;
	}

	s_res[idx] = 0;

	return s_res;
}