#include <stdlib.h>

extern int vince(const char* giocata, const char* risposta, char briscola);

int main(void) {
	
	int r = 0;
	r = vince("7B", "2B", 'D');
	r = vince("2B", "7B", 'D');
	r = vince("7B", "2C", 'D');
	r = vince("2C", "7B", 'D');
	r = vince("7B", "2C", 'B');
	r = vince("2C", "7B", 'B');
	r = vince("7B", "2B", 'B');
	r = vince("2B", "7B", 'B');
	r = vince("8B", "7B", 'B');
	r = vince("2B", "7B", 'X');
	r = vince("2b", "7B", 'D');
	r = vince("7B", "7B", 'D');
	r = vince("2B3", "7B", 'D');
	r = vince("", "7B", 'D');
	r = vince(NULL, "7B", 'D');
	
	return 0;
}