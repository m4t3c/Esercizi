#include <stdlib.h>
#include <stdint.h>

extern void raddoppia(uint32_t* x, size_t n);

int main(void) {

	uint32_t v[3] = { 3, 6 , 9 };
	raddoppia(v, 3);

	return 0;
}