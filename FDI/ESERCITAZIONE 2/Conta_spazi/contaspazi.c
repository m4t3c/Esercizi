#include <stdlib.h>

extern unsigned int conta_spazi(const char* s) {

	unsigned int i = 0;
	unsigned int r = 0;
	
	while (s[i] != 0)
	{
		if (s[i] == ' ') {
			++r;
		}
		++i;
	}

	return r;
}