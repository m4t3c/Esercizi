#include <stdlib.h>
#include <stdbool.h>

extern bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c) {

	if ((a * a) + (b * b) == (c * c) || (b * b) + (c * c) == (a * a) || (a * a) + (c * c) == (b * b)) {
		return true;
	}

	return false;
}