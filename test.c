#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void main() {
	uint8_t hex = 14;
	uint8_t decimal = 0;
	decimal = strtol(hex,NULL,16);
	printf("decimal = %d",decimal);
}
