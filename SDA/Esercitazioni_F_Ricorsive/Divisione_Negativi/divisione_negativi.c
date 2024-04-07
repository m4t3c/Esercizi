#include <limits.h>
#include <math.h>

int DivisioneNegativiRec(int a, int b, int i) {
	if (b > a) {
		return i;
	}
	++i;
	return DivisioneNegativiRec(a - b, b, i);
}

int DivisioneNegativi(int a, int b) {
	if (b == 0) {
		return INT_MAX;
	}
	if (a == 0 || abs(b) > abs(a)) {
		return 0;
	}
	int i = 0;

	if (a < 0 && b < 0) {
		return DivisioneNegativiRec(abs(a), abs(b), i);
	}
	if (a < 0 || b < 0) {
		return -DivisioneNegativiRec(abs(a), abs(b), i);
	}
	else
	{
		return DivisioneNegativiRec(a, b, i);
	}

}