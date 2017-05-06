#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<time.h>
long int binary_decimal(char *binary)
{
    long int sum=0,len,i;
    len=strlen(binary)-1;
    for(i=0;i<=len;i++)
    {
        sum=sum+(binary[len-i]-48)*(long)pow(2,i);
    }
    return sum;
}
int main()
{
    long int decimal;
    char binary[1000];
    while(scanf("%s",binary)!=EOF)
    {
    decimal=binary_decimal(binary);
    printf("%ld\n",decimal);
    }
    return 0;
}
