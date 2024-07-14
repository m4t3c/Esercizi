unsigned PowerTwo(unsigned n) {
	
	if (n & 1 || n == 0) { //n & 1 restituisce vero se è dispari
		return 0;
	}

	return 1 + PowerTwo(n >> 1); //divisione binaria
}