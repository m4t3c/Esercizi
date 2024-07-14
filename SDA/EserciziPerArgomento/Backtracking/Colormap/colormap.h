#if !defined COLORMAP_H

#define COLORMAP_H

#include <stdlib.h>
#include <stdbool.h>

struct SquareMatrix {
	size_t side;
	bool* data;
};

extern int ColorMap(const struct SquareMatrix* m, const char* c);

#endif /*COLORMAP_H*/
