#include "bcd.h"

unsigned short bin2bcd(unsigned short val) {
	unsigned short cifra1 = (val / 1000) % 10;
	unsigned short cifra2 = (val / 100) % 10;
	unsigned short cifra3 = (val / 10) % 10;
	unsigned short cifra4 = val % 10;

	return ((cifra1 << 12) | (cifra2 << 8) | (cifra3 << 4) | cifra4);
}