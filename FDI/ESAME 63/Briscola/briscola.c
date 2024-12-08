#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int valore_carta(char valore) {
	switch (valore) {
	case 'A': return 11;
	case '3': return 10;
	case 'R': return 9;
	case 'C': return 7;
	case 'F': return 6;
	case '7': return 5;
	case '6': return 4;
	case '5': return 3;
	case '4': return 2;
	case '2': return 1;
	default: return -1;
	}
}

extern int vince(const char* giocata, const char* risposta, char briscola) {

	if (strcmp(&briscola, "S") != 0 && strcmp(&briscola, "C") != 0 && strcmp(&briscola, "D") != 0 && strcmp(&briscola, "B") != 0) {
		return -1;
	}

	if (giocata == NULL || risposta == NULL) {
		return -1;
	}

	if (strlen(giocata) != 2 || strlen(risposta) != 2) {
		return -1;
	}

	char valori_validi[] = "A234567FCR";
	char semi_validi[] = "SCDB";

	if (strchr(valori_validi, giocata[0]) == NULL || strchr(semi_validi, giocata[1]) == NULL ||
		strchr(valori_validi, risposta[0]) == NULL || strchr(semi_validi, risposta[1]) == NULL) {
		return -1;
	}

	if (strcmp(giocata, risposta) == 0) {
		return -1;
	}

	char seme_mano = giocata[1];

	int valore_giocata = valore_carta(giocata[0]);
	int valore_risposta = valore_carta(risposta[0]);

	if (valore_giocata == -1 || valore_risposta == -1) {
		return -1;
	}

	if (risposta[1] == briscola && giocata[1] != briscola) {
		return 1;
	}
	else if (giocata[1] == briscola && risposta[1] != briscola) {
		return 0;
	}
	else if (giocata[1] == risposta[1]) {
		if (valore_giocata > valore_risposta) {
			return 0;
		}
		else {
			return 1;
		}
	}
	else if(risposta[1] != seme_mano)
	{
		return 0;
	}
	else
	{
		if (valore_giocata > valore_risposta) {
			return 0;
		}
		else {
			return 1;
		}
	}
}