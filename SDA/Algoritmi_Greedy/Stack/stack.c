#include "stack.h"

void Assegna_Dati(size_t idx, Stack* stacks, unsigned* sum) {
	unsigned tmp = 0;
	for (size_t i = 0; i < stacks[idx].m; ++i) {
		tmp += stacks[idx].elements[i];
	}
	sum[idx] = tmp;

	return;
}


unsigned MaxSumNStack(Stack* stacks, size_t n) {

	unsigned* sum = calloc(n, sizeof(unsigned));
	for (size_t i = 0; i < n; ++i) {
		Assegna_Dati(i, stacks, sum);
	}



	return 0;
}