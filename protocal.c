#include <stdio.h>
#include <stdint.h>

void main(){
	uint8_t dat[16] = {0xd5,0xcc,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0xda,0x7d,0xf8,0xff,0x00};
	uint8_t cmd;
	uint32_t random_numb;
	uint8_t count;
	uint32_t ID;
	uint32_t unix_time;
	printf("protocal = 0x%x \n",dat);
	//assignment
	cmd = dat[0];
	random_numb = (dat[4] << 24) | (dat[3] << 16) | (dat[2] << 8) | (dat[1] << 0);
	count = (dat[6] << 8) | dat[5];
	ID = (dat[10] << 24) | (dat[9] << 16) | (dat[8] << 8) | dat[7];
	unix_time = (dat[14] << 24) | (dat[13] << 16) | (dat[12] << 8) | dat[11];
	//output
	printf("cmd = 0x%x \n",cmd);	
	printf("random_numb = 0x%08x \n",random_numb);
	printf("count = 0x%04x \n",count);
	printf("ID = 0x%08x \n",ID);
	printf("unix_time = 0x%x \n",unix_time);
}
