#include <stdlib.h>
#include <stdint.h>

extern void copy_vector(uint32_t* dst, uint32_t* src, size_t n) {
	if (dst == NULL || src == NULL) {
		return;
	}
	
	for (size_t i = 0; i < n; ++i) {
		dst[i] = src[i];
	}

	return;
}