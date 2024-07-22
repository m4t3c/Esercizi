#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

static bool CheckTimes(int* vcurr, int* min, int* hours) {
	int m = 0;
	int h = 0;
	for (int i = 0; i < 5; ++i) {
		if (vcurr[i] == 1) {
			h += (int)pow(2, 4 - i);
		}
	}

	for (int i = 0; i < 6; ++i) {
		if (vcurr[5 + i] == 1) {
			m += (int)pow(2, 5 - i);
		}
	}

	if (h < 24 && m < 60) {
		*min = m;
		*hours = h;
		return true;
	}
	
	return false;
}

static void ValidTimesRec(uint8_t n, int i, uint8_t cnt, int* vcurr) {

	if (cnt == n) {
		int min = 0;
		int hours = 0;
		if (CheckTimes(vcurr, &min, &hours)) {
			printf("%02d:", hours);
			printf("%02d, ", min);
		}
		return;
	}
	if (i == 11) {
		return;
	}

	vcurr[i] = 1;
	ValidTimesRec(n, i + 1, cnt + 1, vcurr);
	vcurr[i] = 0;
	ValidTimesRec(n, i + 1, cnt, vcurr);
}

void ValidTimes(uint8_t n) {

	if (n > 11) {
		return;
	}

	int* vcurr = calloc(11, sizeof(int));
	ValidTimesRec(n, 0, 0, vcurr);
	free(vcurr);
}