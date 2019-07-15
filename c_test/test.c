#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define  DBG_LOG(format, ...)     printf("> "format"\r\n", ##__VA_ARGS__);


uint8_t communication(int *dat) {
	uint8_t i = 0;
	for(i=0;i<=8;i++){
		printf("dat[%d] = %02x \n",i,dat[i]);
	}
}

void main() {
	//static int dat[9] = {0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x04};
	//communication(dat);
	
	char chardata[] = "1015800105060001";
	uint8_t data[16] = {0};
//	for(uint8_t i=0;i<=15;i++) {
//		data[i] = atoi(&chardata[i]);
//		DBG_LOG("data[%d] = %d",i,data[i]);
//	}
	
	for(uint8_t i=0;i<=15;i++) {
//		DBG_LOG("chardata[%d] = %d",i,(chardata[i]-48));	
		data[i] = (uint8_t)(chardata[i]-48);
		DBG_LOG("data[%d] = %d",i,data[i]);
	}
}
