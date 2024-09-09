#include <stdlib.h>
#include <stdio.h>

static void CombinaMoneteRec(int b, int sum, const int* m, size_t m_size, size_t i, int* vcurr, int* count) {

	if (sum == b) {
		(*count)++;
		for (size_t j = 0; j < m_size; ++j) {
			if (j == m_size - 1) {
				printf("%d\n", vcurr[j]);
			}
			else
			{
				printf("%d ", vcurr[j]);
			}
		}
		return;
	}
	if (i == m_size) {
		return;
	}

	for (int j = 0; j <= b; ++j) {
		vcurr[i] = j;
		sum += j * m[i];

		if (sum > b) {
			vcurr[i] = 0;
			return;
		}

		CombinaMoneteRec(b, sum, m, m_size, i + 1, vcurr, count);

		sum -= j * m[i];
	}

}

int CombinaMonete(int b, const int* m, size_t m_size) {

	if (b == 0) {
		return 0;
	}
	
	int* vcurr = calloc(m_size, sizeof(int));
	int count = 0;
	CombinaMoneteRec(b, 0, m, m_size, 0, vcurr, &count);
	free(vcurr);

	return count;
}