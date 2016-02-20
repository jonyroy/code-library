#include<stdio.h>
#include<string.h>
int main()
{
    int Y,N,i,M,count=0,tem;
    scanf("%d",&Y);
    M=Y/2;
    i=1;
    while(i<=M)
    {
        if(Y%i==0)
        {
         tem=Y/i;
         if(i<tem)
         count++;
        }
        i++;
    }
    printf("%d\n",count);
    return 0;
}
