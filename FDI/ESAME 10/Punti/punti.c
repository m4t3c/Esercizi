#include "punti.h"
#include <math.h>

double dist_euclidea(const struct punto3d* a, const struct punto3d* b) {

	double dx = a->coord[0] - b->coord[0];
	double dy = a->coord[1] - b->coord[1];
	double dz = a->coord[2] - b->coord[2];
	double res = sqrt((dx * dx) + (dy * dy) + (dz * dz));

	return res;
}

int trova_piu_lontani(const struct punto3d* punti, size_t n, size_t* p1, size_t* p2) {

	if (n < 2) {
		return 0;
	}

	double dst_max = 0;
	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < n; ++j) {
			double tmp = dist_euclidea(&punti[i], &punti[j]);
			if (tmp > dst_max) {
				dst_max = tmp;
				*p1 = i;
				*p2 = j;
			}
		}
	}

	return 1;
}