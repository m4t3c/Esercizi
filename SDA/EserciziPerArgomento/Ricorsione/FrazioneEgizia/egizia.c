#include <stdio.h>

void FrazioneEgiziaRec(int n, int d) {
	if (d % n == 0) {
		printf("1/%i", d / n);
		return;
	}

	int ufra_d = d / n + 1;
	printf("1/%i + ", ufra_d);

	n =  n * ufra_d - d;
	d = d * ufra_d;

	FrazioneEgiziaRec(n, d);
}

void FrazioneEgizia(int n, int d) {

	if (n <= 0 || d <= 0 || n > d) {
		printf("Impossibile convertile la frazione");
		return;
	}

	FrazioneEgiziaRec(n, d);
}