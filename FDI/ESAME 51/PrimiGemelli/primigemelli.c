#include <stdint.h>
#include <stdbool.h>

bool IsPrime(uint32_t num) {
	if (num <= 1) return false;
	if (num <= 3) return true;
	if (num % 2 == 0 || num % 3 == 0) return false;
	for (uint32_t i = 5; i * i <= num; i += 6) {
		if (num % i == 0 || num % (i + 2) == 0) return false;
	}
	return true;
}


extern bool primigemelli(uint32_t start, uint32_t* x, uint32_t* y) {
	if (start <= 2) {
		start = 3;
	}
	else if (start % 2 == 0) {
		start++;
	}
	
	while (start < 4294967295) {
		uint32_t tmp = start + 2;
		if (IsPrime(start) && IsPrime(tmp)) {
			*x = start;
			*y = tmp;
			return true;
		}
		start += 2;
	}

	return false;
}