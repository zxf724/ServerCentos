#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void get_time(uint8_t data[]) {
	uint32_t localtime = 0;
	localtime = (data[2] << 24) | (data[3] << 16) | (data[4] << 8) | data[5];
	printf("localtime = 0x%08x \n",localtime);
	// hex -> DEC
	char hex[4] = {0};
	for(uint8_t i=0;i<=4;i++) {
		hex[i] = data[i+2];
	}
	uint32_t decimal = strtol(hex,NULL,16);
	printf("convert to decimal : %d \n",decimal);
}

void main() {
	uint8_t data[] = {0x7E,0x01,0x5C,0xD2,0x7D,0x25,0x7E};
	get_time(data);
}
