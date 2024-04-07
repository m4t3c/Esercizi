extern int soluzioni(double a, double b, double c, double* x1, double* x2);

int main(void) {
	double x1 = 0;
	double x2 = 0;

	int r = soluzioni(123.598, 227.953, 45.098, &x1, &x2);

	return 0;
}