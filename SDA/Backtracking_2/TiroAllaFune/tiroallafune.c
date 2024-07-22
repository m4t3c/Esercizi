#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

void TiroAllaFuneRec(int* v, int i, int n, int sum, int sum_curr, bool* vcurr, bool* vbest, int* diff_best, int presi) {

	if (presi == n / 2) {
		if (*diff_best > abs(sum_curr - (sum - sum_curr))) {
			*diff_best = abs(sum_curr - (sum - sum_curr));
			memcpy(vbest, vcurr, n * sizeof(bool));
		}
		return;
	}
	if (i == n) {
		return;
	}

	vcurr[i] = true;
	TiroAllaFuneRec(v, i + 1, n, sum, sum_curr + v[i], vcurr, vbest, diff_best, presi + 1);
	vcurr[i] = false;
	TiroAllaFuneRec(v, i + 1, n, sum, sum_curr, vcurr, vbest, diff_best, presi);
}

int main(int argc, char** argv) {

	char* endptr;
	int n = argc - 1;
	int* v = malloc(n * sizeof(int));
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		v[i] = strtol(argv[i + 1], &endptr, 10);
		sum += v[i];
	}
	
	bool* vcurr = calloc(n, sizeof(bool));
	bool* vbest = calloc(n, sizeof(bool));
	int diff_best = INT_MAX;

	TiroAllaFuneRec(v, 0, n, sum, 0, vcurr, vbest, &diff_best, 0);

	int count = 0;
	printf("{ ");
	for (int i = 0; i < n; i++) {
		if (vbest[i]) {
			if (count == (n / 2) - 1) {
				printf("%d ", v[i]);
				break;
			}
			else
			{
				printf("%d, ", v[i]);
				++count;
			}
		}
	}
	printf("}, { ");
	count = 0;
	for (int i = 0; i < n; i++) {
		if (!vbest[i]) {
			if (count == n - (n / 2) - 1) {
				printf("%d ", v[i]);
				break;
			}
			else
			{
				printf("%d, ", v[i]);
				++count;
			}
		}
	}
	printf("}");

	return 0;
}
