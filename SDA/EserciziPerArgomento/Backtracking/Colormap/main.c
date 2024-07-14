#include "colormap.h"

int main(void) {

	bool data[] = { 1, 1, 1, 1, 1, 0, 1, 0, 1 };
	struct SquareMatrix m = { .side = 3, .data = data };
	int res = ColorMap(&m, "rv");

	return 0;
}