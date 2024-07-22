#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

static bool VerificaSoluzione(const int* v, int size) {
	int start = 0;
	
	while (v[start] == 0 && start < size)
	{
		++start;
	}

	for (int i = start; i < size; ++i) {
		if (v[i] == 0) {
			break;
		}
		++start;
	}

	for (int i = start; i < size; ++i) {
		if (v[i] == 1) {
			return false;
		}
	}

	return true;
}

static void OptimalSubarrayRec(const int* v, int n, int i, int* vcurr, int sum_curr, int* sum_best) {

	if (i == n) {
		if (sum_curr > *sum_best && VerificaSoluzione(vcurr, n)) {
			*sum_best = sum_curr;
		}
		return;
	}

	
	vcurr[i] = 0;
	OptimalSubarrayRec(v, n, i + 1, vcurr, sum_curr, sum_best);
	vcurr[i] = 1;
	OptimalSubarrayRec(v, n, i + 1, vcurr, sum_curr + v[i], sum_best);
	
}

int OptimalSubarray(const int* v, size_t n) {

	if (n == 0) {
		return 0;
	}

	int sum_best = 0;
	int* vcurr = calloc(n, sizeof(int));

	OptimalSubarrayRec(v, (int)n, 0, vcurr, 0, &sum_best);
	free(vcurr);

	return sum_best;
}