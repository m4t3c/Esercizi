
extern void translate(char* str, const char* from, const char* to);

int main(void) {

	char s[] = "ciao";
	translate(s, "abdc", "wxzy");

	return 0;
}