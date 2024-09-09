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

    ElemType x = 0;
    ElemType y = 0;

    while (h->size > 1) {
        Pop(h, &y);
        Pop(h, &x);

        if (ElemCompare(&x, &y) != 0) {
            ElemType tmp = y - x;
            HeapMaxInsertNode(h, &tmp);
        }
    }

    if (h->size == 1) {
        return h->data[0];
    }
    else
    {
        return 0;
    }
}
