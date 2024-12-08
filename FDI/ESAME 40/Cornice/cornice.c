#include <stdint.h>
#include <stdio.h>

void ripeti(int c, uint8_t n) {
	for (uint8_t i = 0; i < n; ++i) {
		printf("%d", c);
	}
}

void cornice(uint8_t h, uint8_t w) {

	if (h == 0 || w == 0) {
		return;
	}

	for (uint8_t i = 0; i < w; ++i) {
		printf("/-\\");
		if (i < w - 1) {
			printf("|");
		}
	}
	fputc('\n', stdout);
	
    for (uint8_t i = 0; i < h; i++) {
        for (uint8_t j = 0; j < w * 3 + w - 1; j++) {
            if (j == w * 3 + w - 2) {
                printf("|");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");

        printf("\\");
        for (uint8_t j = 0; j < w * 3 + w - 1; j++) {
            if (j == w * 3 + w - 2) {
                printf("/");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");

        if (i < h - 1) {
            printf("-");
            for (uint8_t j = 0; j < w * 3 + w - 1; j++) {
                if (j == w * 3 + w - 2) {
                    printf("-");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

	for (uint8_t i = 0; i < w; ++i) {
		printf("\\-/");
		if (i < w - 1) {
			printf("|");
		}
	}
	fputc('\n', stdout);
}
