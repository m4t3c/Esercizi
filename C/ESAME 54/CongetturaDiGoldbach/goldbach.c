#include <stdbool.h>
#include <stdint.h>

static bool IsPrime(uint32_t num) {
	if (num <= 1) return false;
	if (num <= 3) return true;
	if (num % 2 == 0 || num % 3 == 0) return false;
	for (uint32_t i = 5; i * i <= num; i += 6) {
		if (num % i == 0 || num % (i + 2) == 0) return false;
	}
	return true;
}

bool goldbach(uint32_t n, uint32_t* p1, uint32_t* p2) {

	if (n % 2 != 0 || n <= 2) {
		return false;
	}
	
	for (uint32_t i = 2; i <= n / 2; i++) {
		if (IsPrime(i) && IsPrime(n - i)) {
			*p1 = i;
			*p2 = n - i;
			return true;
		}
	}

	return true;
}