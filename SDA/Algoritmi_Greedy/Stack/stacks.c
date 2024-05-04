#include "stacks.h"
#include <stdbool.h>

bool stacks_compare(unsigned* v, size_t n) {
	for (size_t i = 1; i < n; ++i) {
		if (v[i] != v[0]) {
			return false;
		}
	}
	return true;
}

size_t find_max_pos(unsigned* v, size_t n) {
	size_t max_pos = 0;
	for (size_t i = 1; i < n; ++i) {
		if (v[i] > v[max_pos]) {
			max_pos = i;
		}
	}

	return max_pos;
}

extern unsigned MaxSumNStack(Stack* stacks, size_t n) {

	unsigned* sum = calloc(n, sizeof(unsigned));

	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < stacks[i].m; ++j) {
			sum[i] += stacks[i].elements[j];
		}
	}

	size_t i;
	while (stacks_compare(sum, n) == false) {
		i = find_max_pos(sum, n);
		sum[i] -= stacks[i].elements[stacks[i].m - 1];
		stacks[i].m -= 1;
	}

	unsigned res = sum[0];
	free(sum);
	return res;
}