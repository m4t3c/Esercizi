#include <stdbool.h>
#include <stdint.h>

extern bool goldbach(uint32_t n, uint32_t* p1, uint32_t* p2);

int main(void) {
	
	uint32_t p1 = 0;
	uint32_t p2 = 0;

	bool res = goldbach(143456, &p1, &p2);

	return 0;
}