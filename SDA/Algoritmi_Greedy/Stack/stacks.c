#include "stacks.h"
#include <stdbool.h>

static bool StackCompare(unsigned* sums, size_t n) {
	for (size_t i = 0; i < n; ++i) {
		if (sums[0] != sums[i]) {
			return false;
		}
	}

	return true;
}

static size_t FindMaxPos(unsigned* sums, size_t n) {
	size_t best = 0;
	for (size_t i = 1; i < n; ++i) {
		if (sums[best] < sums[i]) {
			best = i;
		}
	}

	return best;
}

static unsigned Sum(Stack stacks) {
	unsigned res = 0;
	for (size_t i = 0; i < stacks.m; ++i) {
		res += stacks.elements[i];
	}

	return res;
}

unsigned MaxSumNStack(Stack* stacks, size_t n) {

	unsigned* sums = malloc(n * sizeof(unsigned));
	for (size_t i = 0; i < n; ++i) {
		sums[i] = Sum(stacks[i]);
	}

	while (!StackCompare(sums, n)) {
		size_t best = FindMaxPos(sums, n);
		sums[best] -= stacks[best].elements[stacks[best].m - 1];
		stacks[best].m--;
	}

	unsigned res = sums[0];
	free(sums);

	return res;
}