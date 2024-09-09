#include <stdlib.h>
#include <limits.h>

void flip(int* v, size_t i) {
    size_t start = 0;
    while (start < i) {
        // Scambia gli elementi
        int temp = v[start];
        v[start] = v[i];
        v[i] = temp;
        start++;
        i--;
    }
}

void PancakeSort(int* v, size_t v_size) {

    if (v == NULL) {
        return;
    }

    size_t curr_size = v_size;
    size_t m = 0;
    int tmp = INT_MIN;

    while (curr_size != 1) {

        for (size_t i = 0; i < curr_size; ++i) {
            if (v[i] > tmp) {
                tmp = v[i];
                m = i;
            }
        }

        flip(v, m);
        flip(v, curr_size - 1);
        tmp = INT_MIN;
        --curr_size;
    }
}