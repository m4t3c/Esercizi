#include "utf8.h"

int main(void) {

    uint8_t seq[4];
    uint32_t codepoint = 0x20AC; // Simbolo dell'euro
    size_t length = utf8_encode(codepoint, seq);

    return 0;
}