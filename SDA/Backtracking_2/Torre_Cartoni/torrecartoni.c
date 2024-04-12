#include "torrecartoni.h"

void TorreCartoniRec(int n, const Cartone* c, int i, Torre* vcurr, Torre* vbest, bool* usati) {
	if (vcurr->a > vbest->a) {
		vbest->a = vcurr->a;
		vbest->peso = vcurr->peso;
		memcpy(vbest->c_ids, vcurr->c_ids, vcurr->c_size * sizeof(int)); //se lo metto dentro il caso base perdo tutte le sol ottime
	}

	if (i == n) {
		return;
	}

	for (int j = 0; j < n; ++j) {
		if (!usati[j] && c[j].l >= vcurr->peso) {
			vcurr->a += c[j].a;
			vcurr->peso += c[j].p;
			vcurr->c_ids[vcurr->c_size] = j; //aggiorno vcurr con il cartone che ho preso che ha indirizzo j
			vcurr->c_size++;
			usati[j] = 1;
			TorreCartoniRec(n, c, i + 1, vcurr, vbest, usati);

			vcurr->a -= c[j].a;
			vcurr->peso -= c[j].p;
			vcurr->c_size--;
			usati[j] = 1;
		}

	}
}

void TorreCartoni(const Cartone* c, size_t n) {
	bool* usati = calloc(n, sizeof(bool));
	Torre vcurr = { .a = 0, .c_ids = malloc(n * sizeof(int)), .c_size = 0, .peso = 0 };
	Torre vbest = { .a = 0, .c_ids = malloc(n * sizeof(int)), .c_size = 0, .peso = 0 };

	TorreCartoniRec((int)n, c, 0, &vcurr, &vbest, usati);



}