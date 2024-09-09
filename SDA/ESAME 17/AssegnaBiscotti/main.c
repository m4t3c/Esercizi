#include <stdlib.h>

extern int AssegnaBiscotti(const int* bam, size_t bam_size, const int* bis, size_t bis_size);

int main() {

	int bam[] = { 10, 20, 30 };
	int bis[] = { 10, 6, 7, 8 };

	int res = AssegnaBiscotti(bam, 3, bis, 4);

	return 0;
}