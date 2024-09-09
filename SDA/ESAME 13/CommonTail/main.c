#include "list.h"

extern const Item* CommonTail(const Item* i1, const Item* i2);

int main(void) {

    ElemType v1 = 1, v2 = 2, v3 = 3, v4 = 4, v5 = 5;

    Item* i1 = ListCreateEmpty();
    i1 = ListInsertHead(&v4, i1); 
    i1 = ListInsertHead(&v3, i1); 
    i1 = ListInsertHead(&v2, i1); 
    i1 = ListInsertHead(&v1, i1); 

    Item* i2 = ListCreateEmpty();
    i2 = ListInsertHead(&v4, i2); 
    i2 = ListInsertHead(&v3, i2); 
    i2 = ListInsertHead(&v5, i2); 

    // Stampa delle liste
    printf("Lista i1: ");
    ListWriteStdout(i1); // Dovrebbe stampare: 1 -> 2 -> 3 -> 4
    printf("\n");

    printf("Lista i2: ");
    ListWriteStdout(i2); // Dovrebbe stampare: 5 -> 3 -> 4
    printf("\n");

    const Item* tail = CommonTail(i1, i2);

    return 0;
}