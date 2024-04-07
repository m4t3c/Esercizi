extern int DivisioneNegativi(int a, int b);

int main(void) {
	int d;
	d = DivisioneNegativi(-4, -2); //2
	d = DivisioneNegativi(33, -3); //-11
	d = DivisioneNegativi(-14, 7); //-2
	d = DivisioneNegativi(-2, 0); //INT_MAX
	d = DivisioneNegativi(0, 0); //INT_MAX
	d = DivisioneNegativi(0, -4); //0
	
	return 0;
}