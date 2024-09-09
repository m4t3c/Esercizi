#include <limits.h>
#include <math.h>

static int DivisioneNegativiRec(int a, int b) {
	if (b > a) {
		return 0;
	}

	return 1 + DivisioneNegativiRec(a - b, b);
}

int DivisioneNegativi(int a, int b) {

	if (b == 0) {
		return INT_MAX;
	}

	if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
		return -DivisioneNegativiRec(abs(a), abs(b));
	}
	else
	{
		return DivisioneNegativiRec(abs(a), abs(b));
	}
}