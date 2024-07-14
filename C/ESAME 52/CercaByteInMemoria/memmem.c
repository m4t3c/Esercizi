#include <stdlib.h>
#include <stdint.h>
#include <string.h>

const void* memmem(const void* pagliaio, size_t psize, const void* ago, size_t asize) {

	if (pagliaio == NULL || psize == 0 || ago == NULL || asize == 0) {
		return NULL;
	}

	const uint8_t* offset = pagliaio;
	size_t tmp = psize;
	while ((offset = memchr(offset, ((uint8_t*)ago)[0], psize)) != NULL) {
		if (psize < asize) {
			return NULL;
		}
		tmp = psize;
		if (memcmp(offset, ago, asize) == 0) {
			return offset;
		}

		++offset;
		tmp -= (offset - (uint8_t*)pagliaio);

	}

	return NULL;
}