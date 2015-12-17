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
      remainder=tem%11;
    }
    if(remainder==0)
    printf("%s is a multiple of 11.\n",dividend);
    else
    printf("%s is not a multiple of 11.\n",dividend);
    }
    return 0;
}
