#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<time.h>
long int hexa_decimal(char *hexa)
{
    long int sum=0,len,i;
    len=strlen(hexa)-1;
    for(i=0;i<=len;i++)
    {
        if(hexa[len-i]>='A'&&hexa[len-i]<='F')
        sum=sum+(hexa[len-i]-55)*(long)pow(16,i);
        else
        sum=sum+(hexa[len-i]-48)*(long)pow(16,i);
    }
    return sum;
}
int main()
{
    long int decimal;
    char hexa[1000];
    while(scanf("%s",hexa)!=EOF)
    {
    decimal=hexa_decimal(hexa);
    printf("%ld\n",decimal);
    }
    return 0;
}
