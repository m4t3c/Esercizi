#include <stdbool.h>

bool trova_primo(unsigned int n) {
	for (unsigned int i = 2; i * i <= n; ++i) {
		if ((n % i) == 0) {
			return false;
		}
	}
	return true;
}


unsigned int prossimo_primo(unsigned int x) {

	unsigned int res = x + 1;
	
	while (trova_primo(res) != 1)
	{
		++res;
	}

	return res;
}