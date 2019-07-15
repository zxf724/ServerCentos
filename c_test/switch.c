#include <stdio.h>
void main(){ 
    int wait_moto[5] = {0,0,0,0,1};
    int i = 0;
    int nitem = 5; 
        switch (nitem) { 
        case 1: 
            printf("case 1"); 
            break; 
        case 5:
            while(1) {
              if(wait_moto[i] == 0) {
                i++;
              }else {
                  printf("case 5");
                  break;
              } 
            }
            break; 
        case 9: 
            printf("case 9"); 
            break; 
        default: 
            printf("No match found"); 
            break; 
        } 
} 
