#include "libri.h"

int main(void) {

	unsigned pn = 0;
	struct libro* res = read_libri("libri1.txt", &pn);

	return 0;
}