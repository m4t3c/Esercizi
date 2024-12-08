#include "byteswap.h"

uint32_t byteswap(uint32_t n) {

	return((n & 0xFF000000) >> 24 | (n & 0x00FF0000) >> 8 | (n & 0x0000FF00) << 8 | (n & 0x000000FF) << 24);
}