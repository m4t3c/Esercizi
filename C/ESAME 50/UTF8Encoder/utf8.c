#include "utf8.h"

size_t utf8_encode(uint32_t codepoint, uint8_t seq[4]) {
	if (codepoint <= 0x7F) {
		seq[0] = codepoint;
		return 1;
	}
	else if (codepoint <= 0x7FF)
	{
		seq[0] = (0xC0 | (codepoint >> 6) & 0x1F);
		seq[1] = (0x80 | (codepoint & 0x3F));
		return 2;
	}
	else if (codepoint <= 0xFFFF)
	{
		seq[0] = (0xE0 | (codepoint >> 12) & 0x0F);
		seq[1] = (0x80 | ((codepoint >> 6) & 0x3F));
		seq[2] = (uint8_t)(0x80 | (codepoint & 0x3F));
		return 3;
	}
	else if (codepoint <= 0x10FFFF)
	{
		seq[0] = (uint8_t)(0xF0 | ((codepoint >> 18) & 0x07));
		seq[1] = (uint8_t)(0x80 | ((codepoint >> 12) & 0x3F));
		seq[2] = (uint8_t)(0x80 | ((codepoint >> 6) & 0x3F));
		seq[3] = (uint8_t)(0x80 | (codepoint & 0x3F));
		return 4;
	}
	else
	{
		return 0;
	}
}