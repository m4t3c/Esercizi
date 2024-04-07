extern int ProdottoNegativi(int a, int b);

int main(void) {
	int r;
	r = ProdottoNegativi(3, 5);
	r = ProdottoNegativi(-1, 3);
	r = ProdottoNegativi(-1, -3);
	r = ProdottoNegativi(0, 3);

	return 0;
}