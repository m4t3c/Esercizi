#include "punti_in_cerchio.h"

struct punto* punti_in_cerchio(const struct punto* p, size_t n, double r, size_t* count) {

	if (p == NULL || n == 0 || r < 0) {
		*count = 0;
		return NULL;
	}

	struct punto* res = NULL;
	size_t p_idx = 0;
	size_t size = 1;

	for (size_t i = 0; i < n; ++i) {
		if ((p[i].x * p[i].x) + (p[i].y * p[i].y) <= r * r) {
			++p_idx;
			if (p_idx >= size) {
				size *= 2;
				res = realloc(res, size * sizeof(struct punto));
			}

			res[p_idx - 1].x = p[i].x;
			res[p_idx - 1].y = p[i].y;
		}
	}

	if (p_idx == 0) {
		*count = p_idx;
		return NULL;
	}
	res = realloc(res, p_idx * sizeof(struct punto));
	*count = p_idx;

	return res;
}