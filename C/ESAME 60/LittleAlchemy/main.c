#include "little_alchemy.h"

int main(void) {

    struct element elems[] = {
  { "acqua", "fuoco", "vapore" },
  { "terra", "pioggia", "pianta" }
    };

    const char* res = combine("terra", "pioggia", elems, 2);

	return 0;
}