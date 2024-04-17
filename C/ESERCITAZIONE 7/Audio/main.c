#include "audio.h"

int main(void) {

	struct audio a = { 0, NULL, NULL };
	int r =audio_read("test.raw", &a);

	return 0;
}