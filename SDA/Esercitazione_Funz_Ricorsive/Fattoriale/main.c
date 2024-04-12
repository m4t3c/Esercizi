extern unsigned long long Fattoriale(int n);

int main(void) {

	unsigned long long f;
	f = Fattoriale(0);
	f = Fattoriale(-2);
	f = Fattoriale(5);

	return 0;
}