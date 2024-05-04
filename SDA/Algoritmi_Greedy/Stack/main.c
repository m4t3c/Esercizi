#include "stacks.h"

int main(void) {

    Stack vec[] = {
        {.m = 5, .elements = (unsigned[]) {1, 1, 1, 2, 3}},
        {.m = 3, .elements = (unsigned[]) {2, 3, 4}},
        {.m = 4, .elements = (unsigned[]) {1, 4, 5, 2}}
    };

    unsigned r = MaxSumNStack(vec, 3);

    return 0;

}