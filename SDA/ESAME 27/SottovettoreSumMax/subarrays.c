#include <stdlib.h>
#include <stdbool.h>

static bool Check(bool* vcurr, size_t n) {

	size_t start = 0;

	while (vcurr[start] != true) {
		++start;
	}

	size_t end = start;

	while (vcurr[end] == true) {
		++end;
	}

	for (size_t i = end; i < n; ++i) {
		if (vcurr[i] == true) {
			return false;
		}
	}

	return true;
}

static void OptimalSubarrayRec(const int* v, size_t n, size_t i, bool* vcurr, int* sum_best, int sum_curr) {

	if (sum_curr > *sum_best) {
		if (Check(vcurr, n)) {
			*sum_best = sum_curr;
		}
	}
	if (i == n) {
		return;
	}

	vcurr[i] = true;
	OptimalSubarrayRec(v, n, i + 1, vcurr, sum_best, sum_curr + v[i]);
	vcurr[i] = false;
	OptimalSubarrayRec(v, n, i + 1, vcurr, sum_best, sum_curr);
}

int OptimalSubarray(const int* v, size_t n) {

	if (n == 0) {
		return 0;
	}

	bool* vcurr = calloc(n, sizeof(bool));
	int sum = 0;
	OptimalSubarrayRec(v, n, 0, vcurr, &sum, 0);

	free(vcurr);

	return sum;
}