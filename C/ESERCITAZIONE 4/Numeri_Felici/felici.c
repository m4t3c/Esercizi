
extern int felice(unsigned int num) {
	if (num == 0) {
		return 0;
	}

	int tmp = 0;

	while (num != 1) {
		while (num != 0)
		{
			tmp += (num % 10) * (num % 10);
			num /= 10;
		}
		
		num = tmp;

		if (num == 4) {
			return 0;
		}

		tmp = 0;
	}

	return 1;
}