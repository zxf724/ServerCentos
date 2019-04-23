#include<stdio.h>
#include<stdlib.h>
int main()
{
    /****** Convert decimal to hex ********/
    int a;
    printf("Enter a decimal number:");
    scanf("%d",&a);
    char ch[10]={0,};
    sprintf(ch,"%X",a);
    printf("Convert to hex:%s\n",ch);
    /****** Convert hex to decimal ********/
    char hex[10] = {0,};
    long int decimal;
    printf("Enter a hex number:");
    scanf("%s",hex);
    decimal = strtol(hex,NULL,16);
    printf("Convert to decimal:%ld\n",decimal);
    return 0;
}
