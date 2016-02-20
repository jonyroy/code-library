//Accepted
#include<stdio.h>
#include<string.h>
#define MAX 2000
int main()
{
    char dividend[MAX];
    int i,tem,remainder,len;
    while(1)
    {
    scanf("%s",dividend);
    if(strcmp(dividend,"0")==0)
    break;
    len=strlen(dividend);
    remainder=0;
    for(i=0;i<len;i++)
    {
      tem=remainder*10+dividend[i]-48;
      remainder=tem%17;
    }
    if(remainder==0)
    printf("1\n");
    else
    printf("0\n");
    }
    return 0;
}
