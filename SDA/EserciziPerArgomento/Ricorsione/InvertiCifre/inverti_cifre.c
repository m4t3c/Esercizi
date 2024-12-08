int InvertiCifreRec(int n, int n_inv) {
	if (n == 0) {
		return n_inv;
	}

	return InvertiCifreRec(n / 10, n_inv * 10 + n % 10); //inserisco per prima l'ultima cifra poi mano mano che vado avanti diventa sempre più significativa
}

int InvertiCifre(int n) {
	return InvertiCifreRec(n, 0);
}