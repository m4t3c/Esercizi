extern int is_date(const char* s);

int main(void) {

	int r = is_date("12/02/2014");
	r = is_date("10.07.2015");

	return 0;
}