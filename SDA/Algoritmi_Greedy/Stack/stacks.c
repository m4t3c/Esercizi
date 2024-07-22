#include "stacks.h"
#include <stdbool.h>

bool StacksCompare(unsigned* sum, size_t n) {

	for (size_t i = 1; i < n; ++i) {
		if (sum[0] != sum[i]) {
			return false;
		}
	}
	return true;
}

size_t FindMaxPos(unsigned* v, size_t n) {

	size_t max_pos = 0;
	for (size_t i = 1; i < n; ++i) {
		if (v[i] > v[max_pos]) {
			max_pos = i;
		}
	}

	return max_pos;
}

unsigned MaxSumNStack(Stack* stacks, size_t n) {

	unsigned* sum = calloc(n, sizeof(unsigned));

	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < stacks[i].m; ++j) {
			sum[i] += stacks[i].elements[j];
		}
	}

	size_t i = 0;
	while (!StacksCompare(sum, n))
	{
		i = FindMaxPos(sum, n);
		sum[i] -= stacks[i].elements[stacks[i].m - 1];
		stacks[i].m--;
	}
	unsigned res = sum[0];
	free(sum);
	return res;
}