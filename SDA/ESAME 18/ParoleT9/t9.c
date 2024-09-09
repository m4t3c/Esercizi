#include <stdlib.h>
#include <string.h>
#include <stdio.h>

const char* t9_map[] = {
    "",     // 0 - Non utilizzato
    "",     // 1 - Non utilizzato
    "ABC",  // 2
    "DEF",  // 3
    "GHI",  // 4
    "JKL",  // 5
    "MNO",  // 6
    "PQRS", // 7
    "TUV",  // 8
    "WXYZ"  // 9
};

static void ParoleT9Rec(const char* str, size_t len, size_t i, char* curr, int* count) {

    if (i == len) {
        printf("%s\n", curr);
        (*count)++;
        return;
    }

    int digit = str[i] - '0';

    const char* letters = t9_map[digit];

    for (size_t j = 0; j < strlen(letters); ++j) {
        curr[i] = letters[j];
        ParoleT9Rec(str, len, i + 1, curr, count);
    }
}

int ParoleT9(const char* str) {
    if (str == NULL || strlen(str) == 0) {
        return 0;
    }

    int count = 0;
    size_t len = strlen(str);
    char* curr = calloc(len + 1, sizeof(char));
    ParoleT9Rec(str, len, 0, curr, &count);
    free(curr);

    return count;
}