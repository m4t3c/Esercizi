int strcmp_natural(const char* a, const char* b);

int main(void) {
	int r = 0;
	r = strcmp_natural("a3b5", "a21b53");
	r = strcmp_natural("a33b5", "a21b53");
	r = strcmp_natural("a21b5", "a21b53");
	r = strcmp_natural("a21b105", "a21b53");
	r = strcmp_natural("a21b105", "a21b105");
	r = strcmp_natural("a21b105", "a21b10");
	r = strcmp_natural("a21b105", "a21b105x");

	return 0;
}