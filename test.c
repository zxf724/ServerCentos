#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void main() {
	uint8_t byte3 = 15;
	static uint8_t dat[5] = {0x06,0x01,0x00,0x28,0x2f};
	dat[3] = byte3;
	printf("dat[3] = %02x",dat[3]);
}
