#include "punti_in_cerchio.h"

int main() {

	struct punto p[] = { {5, 1}, {4, 3.7}, {6.3, 8} };
	size_t count = 0;
	struct punto* res = punti_in_cerchio(p, 3, 2.0, &count);

	return 0;
}