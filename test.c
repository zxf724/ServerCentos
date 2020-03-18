#include <stdio.h>
#include <string.h>


int main(){
    // init Src, len Dest
    char Src[26] = {'\0'};
    int Srclen = 0;
    int P = 0;
    
    // input src and len and P
    scanf("%s %d %d", &Src, &Srclen, &P);
    
    //init Left part and Right part
    char Left[26] = "\0";
    char Right[26] = "\0";

    memcpy(Left, Src, P);
    memcpy(Right, Src+P, strlen(Src)-P);

    printf("%s\n", strcat(Right, Left) );

    return 0;
}
