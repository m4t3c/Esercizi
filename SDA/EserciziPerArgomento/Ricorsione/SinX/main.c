#define _USE_MATH_DEFINES
#include <math.h>

extern double Sen(double x, int i);

int main() {
	double s;

	s = Sen(M_PI / 2, 2);

	return 0;
}