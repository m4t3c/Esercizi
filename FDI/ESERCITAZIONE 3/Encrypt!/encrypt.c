void encrypt(char* s, unsigned int n)
{
	const int xor = 0xAA;

	for (unsigned int i = 0; i < n - 1; ++i)
	{
		s[i] ^= xor;
	}

	s[n] = 0;

}