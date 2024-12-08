#include "risiko.h"
#include <stdlib.h>

size_t MinOREqual(char a, char b) {

	if (a == b) {
		return a;
	}
	else if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

void confronta_lanci(const struct lancio* attacco, const struct lancio* difesa, char* perse_attacco, char* perse_difesa) {

	size_t cnfr = MinOREqual(attacco->n_dadi, difesa->n_dadi);
	char pa = 0;
	char pd = 0;

	for (size_t i = 0; i < cnfr; ++i) {
		if (attacco->valori[i] > difesa->valori[i]) {
			++pd;
		}
		else
		{
			++pa;
		}
	}

	*perse_attacco = pa;
	*perse_difesa = pd;
}