extern int is_hex(const char *s);

int main() {
	int res = is_hex("0x12f4");
	res = is_hex("0x123456789");

	return 0;
}