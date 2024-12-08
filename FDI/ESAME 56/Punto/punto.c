#include "punto.h"
#include <math.h>

struct punto_pol cartesiano2polare(const struct punto_cart* p) {

	double r = sqrt((pow(p->x, 2) + pow(p->y, 2)));
	double t = atan2(p->y, p->x);

	struct punto_pol res = { r, t };
	return res;
}

struct punto_cart polare2cartesiano(const struct punto_pol* p) {

	double x = p->r * cos(p->t);
	double y = p->r * sin(p->t);

	struct punto_cart res = {x, y};
	return res;
}