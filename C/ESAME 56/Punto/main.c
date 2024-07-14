#include "punto.h"

int main(void) {

	struct punto_cart c = { 2, 4 };

	struct punto_pol r = cartesiano2polare(&c);
	struct punto_cart r1 = polare2cartesiano(&r);

	return 0;
}