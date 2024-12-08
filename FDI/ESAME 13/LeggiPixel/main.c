#include "punti.h"

int main() {

	FILE* f = fopen("punti1.dat", "rb");
	size_t n = 0;
	struct pixel* res = read_pixels(f, &n);

	return 0;
}