#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <string.h>

void get_time(uint8_t data[]) {
	uint32_t localtime = 0;
	localtime = (data[1] << 24) | (data[2] << 16) | (data[3] << 8) | data[4];
	printf("localtime = 0x%08x \n",localtime);
	// hex -> DEC
	uint8_t len = strlen(localtime);
//	uint8_t i = 0;
	long sum = 0;
	for(uint8_t i=0;i<len;i++) {
		if((char)localtime[i] >= 'A' && (char)localtime[i] <= 'Z')
			(char)localtime[i] = int((char)localtime[i] - 'A') + 10 + '0';
		sum += ((char)localtime[i] - '0') * pow(16,len-1-i);
	}
	printf("localtime = %ld \n",sum);
}

void main() {
	uint8_t data[] = {0x7E,0x01,0x5C,0xD2,0x7D,0x25,0x7E};
	get_time(data);
}
