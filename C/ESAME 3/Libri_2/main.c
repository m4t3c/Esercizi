#include "libri.h"

int main(void) {

    struct libro libri[4] = {
    {23875, "L'uomo che piantava gli alberi (Salani Ragazzi)", 64},
    {75628, "Programmazione C. Le basi per tutti (Esperto in un click)", 111},
    {76890, "L'arte dell'hacking - volume 1 (Pocket)", 336},
    {12374, "Piccolo manuale della sicurezza informatica (Pocket)", 204}
    };


    unsigned pn = 4;
    struct libro* res = filtra_libri(libri, &pn, "del");

    return 0;
}