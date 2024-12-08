#include <math.h>

static int ProdottoNegativiRec(int a, int b) {

	if (b == 1) {
		return a;
	}

	return a + ProdottoNegativiRec(a, b - 1);
}

int ProdottoNegativi(int a, int b) {
	if (a == 0 || b == 0) {
		return 0;
	}

	if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
		return -ProdottoNegativiRec(abs(a), abs(b));
	}
	else
	{
		return ProdottoNegativiRec(abs(a), abs(b));
	}
}