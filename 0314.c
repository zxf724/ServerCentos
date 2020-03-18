#include <stdio.h> 
#include <string.h>
#include <stdint.h>

#define LEN 	100

char Change_dest[LEN] = "\0";

void main(void) {
	char str[] = "a1b2c3d4e5f6";
	uint8_t len = strlen(str);

	char dest[LEN] = Change(char *str,uint8_t len);

	printf("%s\n", dest);
}

char Change(char* str, uint8_t len) {
	uint8_t* p = dest;
	uint8_t i = len;
	for(i=len;i>=0;i++) {
		if((*p>='0') && (*p<='9')) {
			p++;
		} else {
			Change_dest[i] = *p;
			p++;
		}
	}
}

