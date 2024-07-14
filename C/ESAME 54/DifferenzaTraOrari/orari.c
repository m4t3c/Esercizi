#include "orari.h"

struct orario differenza_orari(struct orario a, struct orario b) {

	while (a.minuti >= 60) {
		++(a.ore);
		a.minuti -= 60;
	}

	while (b.minuti >= 60)
	{
		++(b.ore);
		b.minuti -= 60;
	}

	while (a.secondi >= 60)
	{
		++(a.minuti);
		if (a.minuti == 60) {
			++(a.ore);
			a.minuti = 0;
		}
		a.secondi -= 60;
	}

	while (b.secondi >= 60)
	{
		++(b.minuti);
		if (b.minuti == 60) {
			++(b.ore);
			b.minuti = 0;
		}
		b.secondi -= 60;
	}

	if (a.ore < b.ore) {
		struct orario res = { 0xFF, 0xFF, 0xFF };
		return res;
	}
	else if (a.ore == b.ore && a.minuti < b.minuti)
	{
		struct orario res = { 0xFF, 0xFF, 0xFF };
		return res;
	}
	else if (a.ore == b.ore && a.minuti == b.minuti && a.secondi < b.secondi)
	{
		struct orario res = { 0xFF, 0xFF, 0xFF };
		return res;
	}

	if (a.secondi < b.secondi) {
		(a.minuti)--;
		a.secondi += 60;
	}
	if (a.minuti < b.minuti) {
		(a.ore)--;
		a.minuti += 60;
	}
	if (a.ore < b.ore) {
		struct orario res = { 0xFF, 0xFF, 0xFF };
		return res;
	}

	uint8_t sec = a.secondi - b.secondi;
	uint8_t min = a.minuti - b.minuti;
	uint8_t hour = a.ore - b.ore;

	struct orario res = { hour, min, sec };
	return res;
}