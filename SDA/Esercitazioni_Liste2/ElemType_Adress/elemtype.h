#if !defined ELEMTYPE_H

#define ELEMTYPE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Address {
    char name[40];
    char street[50];
    int  number;
    char city[30];
    char province[3];
    char postal_code[6];
};
typedef struct Address ElemType;

int ElemCompare(const ElemType* e1, const ElemType* e2);

ElemType ElemCopy(const ElemType* e);

void ElemSwap(ElemType* e1, ElemType* e2);

void ElemDelete(ElemType* e);

void ElemWrite(const ElemType* e, FILE* f);

void ElemWriteStdout(const ElemType* e);

#endif /*ELEMTYPE_H*/

