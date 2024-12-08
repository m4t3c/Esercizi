#include <stdint.h>
#include <stdbool.h>

extern bool primigemelli(uint32_t start, uint32_t* x, uint32_t* y);

int main(void) {

	uint32_t x = 0;
	uint32_t y = 0;
	bool r = primigemelli(0, &x, &y);

	return 0;
}