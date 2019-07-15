#include <stdio.h>
#include <stdint.h>

void main() {
  uint8_t dat[4] = {0x01,0x00,0x00,0x01};
  uint32_t temp = 0;
  temp = (dat[0] << 24) | (dat[1] << 16) | (dat[2] << 8) | dat[3];
  printf("temp = 0x%08x\n",temp);
  //printf("*(uint32_t*)temp = %d\n", *(uint32_t*)temp);
}
