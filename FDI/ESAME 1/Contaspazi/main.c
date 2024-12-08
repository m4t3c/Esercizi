
extern unsigned int conta_spazi(const char* s);

int main(void) {

	unsigned r = 0;
	r = conta_spazi("prova stringa in cui contare gli spazi");
	r = conta_spazi("quì ci sono quattro spazi");

	return 0;
}