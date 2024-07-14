#include "orari.h"

int main(void) {

	struct orario a = { 23, 36, 4 };
	struct orario b = { 15, 47, 12 };

	struct orario res = differenza_orari(a, b);

	return 0;
}