#include "angoli.h"

struct angolo differenza_angoli(struct angolo a, struct angolo b) {

	while (a.primi >= 60) {
		++(a.gradi);
		a.primi -= 60;
	}
	while (b.primi >= 60) {
		++(b.gradi);
		b.primi -= 60;
	}
	while (a.secondi >= 60)	{
		++(a.primi);
		if (a.primi >= 60) {
			++(a.gradi);
			a.primi -= 60;
		}
		a.secondi -= 60;
	}
	while (b.secondi >= 60) {
		++(b.primi);
		if (b.primi >= 60) {
			++(b.gradi);
			b.primi -= 60;
		}
		b.secondi -= 60;
	}

	if (a.secondi < b.secondi) {
		--(a.primi);
		a.secondi += 60;
	}
	if (a.primi < b.primi) {
		--(a.gradi);
		a.primi += 60;
	}

	if (b.gradi > a.gradi) {
		struct angolo res = { 0xFFFF, 0xFF, 0xFF };
		return res;
	}
	if (b.gradi == a.gradi && b.primi > a.primi) {
		struct angolo res = { 0xFFFF, 0xFF, 0xFF };
		return res;
	}
	if (b.gradi == a.gradi && b.primi == a.primi && b.secondi > a.secondi) {
		struct angolo res = { 0xFFFF, 0xFF, 0xFF };
		return res;
	}

	struct angolo res = { a.gradi - b.gradi, a.primi - b.primi, a.secondi - b.secondi };

	return res;
}