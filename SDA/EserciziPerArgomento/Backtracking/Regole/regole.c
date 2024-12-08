#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void RegoleRec(const char* r, int n, int i, int* vcurr, bool*usati) {
	if (i == n + 1) {
		for(int j = 0; j < n + 1; ++j) {
			printf("%d ", vcurr[j]);
		}
		printf("\n");
		return;
	}

	for (int j = 1; j <= n; ++j) {
		
		bool I = !usati[j - 1];
		bool a = i == 0;
		bool b = (r[i - 1] == 'i' || r[i - 1] == 'I') && vcurr[i - 1] < j;
		bool c = (r[i - 1] == 'd' || r[i - 1] == 'D') && vcurr[i - 1] > j;
		bool II = a || b || c;

		if (I && II) {
			usati[j - 1] = true;
			vcurr[i] = j;
			RegoleRec(r, n, i + 1, vcurr, usati);
			usati[j - 1] = false;
		}
	}
	
}

void Regole(const char* r) {
	if (r[0] == 0) {
		printf("1\n");
	}
	
	int n = (int)strlen(r);
	int* vcurr = malloc((n + 1)* sizeof(int));
	bool* usati = calloc((n + 1), sizeof(bool));

	RegoleRec(r, n, 0, vcurr, usati);

	free(vcurr);
	free(usati);
}