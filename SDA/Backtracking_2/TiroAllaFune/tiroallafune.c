#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>

static void TiroAllaFuneRec(const int* v, int n, int i, int sum, int sum_curr, int* diff_best, bool* vcurr, bool* vbest, int presi) {

	if (presi == n / 2) {
		if (abs(sum_curr - (sum - sum_curr)) < *diff_best){
			*diff_best = abs(sum_curr - (sum - sum_curr));
			memcpy(vbest, vcurr, n * sizeof(bool));
		}
		return;
	}
	if (i == n) {
		return;
	}

	vcurr[i] = false;
	TiroAllaFuneRec(v, n, i + 1, sum, sum_curr, diff_best, vcurr, vbest, presi);
	vcurr[i] = true;
	TiroAllaFuneRec(v, n, i + 1, sum, sum_curr + v[i], diff_best, vcurr, vbest, presi + 1);
	vcurr[i] = false;
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

	bool* vcurr = calloc(n, sizeof(int));
	bool* vbest = calloc(n, sizeof(int));
	int diff_best = INT_MAX;

	TiroAllaFuneRec(v, n, 0, sum, 0, &diff_best, vcurr, vbest, 0);
	
	int count = 0;
	printf("{ ");
	for (int i = 0; i < n; ++i) {
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

	printf("}, {");
	count = 0;
	for (int i = 0; i < n; ++i) {
		if (!vbest[i]) {
			if (count == n - (n/2) - 1) {
				printf("%d", v[i]);
				break;
			}
			else
			{
				printf("%d, ", v[i]);
				++count;
			}
		}
	}
	printf(" }");
	free(vcurr);
	free(vbest);

	return 0;
}