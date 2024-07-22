#include "maxheap.h"
#include <stdlib.h>

void Pop(Heap* h, ElemType* popped) {
    if (h->size == 0) {
        popped = NULL;
        return;
    }
    *popped = ElemCopy(&h->data[0]);
    ElemSwap(&h->data[0], &h->data[h->size - 1]);
    h->size--;
    h->data = realloc(h->data, sizeof(ElemType) * h->size);
    HeapMaxMoveDown(h, 0);
    return;
}

int LastStoneWeight(Heap* h) {

    while (!HeapIsEmpty(h))
    {
        ElemType y = 0;
        Pop(h, &y);
        ElemType x = 0;
        Pop(h, &x);
        if (x != y) {
            ElemType diff = y - x;
            HeapMaxInsertNode(h, &diff);
        }
        if (h->size == 1) {
            int res = *h->data;
            return res;
        }
    }

    return 0;
}