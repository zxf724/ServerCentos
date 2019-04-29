#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint8_t communication(int *dat) {
	uint8_t i = 0;
	for(i=0;i<=8;i++){
		printf("dat[%d] = %02x \n",i,dat[i]);
	}
}

void main() {
	static int dat[9] = {0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x04};
	communication(dat);
}
