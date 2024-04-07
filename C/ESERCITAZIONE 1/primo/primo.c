
int primo(unsigned int val) {
	
	if (val == 0 || val == 1) {
		return 0;
	}

	for (int i = 2; i * i <= val; ++i) {
		if ((val % i) == 0) {
			return 0;
		}
	}

	return 1;
}