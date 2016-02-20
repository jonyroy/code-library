#include<stdio.h>
int main()
{
    long long int decimal,i;
    int hexa[100]={};
    while(scanf("%lld",&decimal)!=EOF)
    {
        i=1;
        while(decimal!=0)
        {
         hexa[i++]=decimal%16;
         decimal=decimal/16;
        }

    }
    return 0;
}
