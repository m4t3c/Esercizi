#include "minheap.h"

extern void HeapMinMoveUpRec(Heap* h, int i);

int main() {
    Heap* heap = HeapCreateEmpty();
    ElemType elements[] = { 10, 20, 30, 25, 5, 40, 50 };
    size_t n_elements = sizeof(elements) / sizeof(elements[0]);

    for (size_t i = 0; i < n_elements; i++) {
        HeapMinInsertNode(heap, &elements[i]);
    }

    HeapMinMoveUpRec(heap, 4);

    HeapWriteStdout(heap);

    HeapDelete(heap);

    return 0;
}