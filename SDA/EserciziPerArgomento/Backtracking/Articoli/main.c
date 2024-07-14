#include "prezzo.h"

int main(void) {

	struct Articolo a[] = { {.nome = "Biscotti",.prezzo = 3}, {.nome = "Pesce", .prezzo = 8}, {.nome = "Pasta",.prezzo = 2},
							{.nome = "Pastelli", .prezzo = 3}, {.nome = "Sacchetti", .prezzo = 1}, {.nome = "Mozzarelle", .prezzo = 2}};

	TrovaArticoli(a, 6, 8);

	return 0;
}