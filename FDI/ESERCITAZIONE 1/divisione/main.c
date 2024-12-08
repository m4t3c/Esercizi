extern int divisione(double a, double b, double* q);

int main(void) {

	double q = 0;

	int div = divisione(10, 5, &q);

	return 0;
}