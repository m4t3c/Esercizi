#define _CRT_SECURE_NO_WARNINGS
#include "finance.h"
#include <string.h>
#include <stdio.h>

struct value* read_historical_series(const char* filename, size_t* n) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	char intestazione[128];
	int nread = fscanf(f, "%[^\n]", intestazione);
	if (nread != 1) {
		return NULL;
	}

	struct value* res = NULL;
	char Date_Tmp[11];
	double OpenTmp, HighTmp, LowTmp, CloseTmp, AdjCloseTmp;
	long long VolumeTmp;
	size_t structs = 0;
	while (fscanf(f, "%10s,%lf,%lf,%lf,%lf,%lf,%lld", Date_Tmp, &OpenTmp, &HighTmp, &LowTmp, &CloseTmp, &AdjCloseTmp, &VolumeTmp) == 7)
	{
		++structs;
		res = realloc(res, structs * sizeof(struct value));
		strcpy(res[structs - 1].Date, Date_Tmp);
		res[structs - 1].Open = OpenTmp;
		res[structs - 1].High = HighTmp;
		res[structs - 1].Low = LowTmp;
		res[structs - 1].Close = CloseTmp;
		res[structs - 1].AdjClose = AdjCloseTmp;
		res[structs - 1].Volume = VolumeTmp;
	}

	*n = structs;
	fclose(f);
	return res;
}