#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<time.h>
int deci_hexa(long n)
{
    long c,r,b=16;
    if(n==0)
    return 0;
    c=n/b;
    r=n-b*c;
    n=c;
    deci_hexa(n);
    if(r==10)
    printf("A");
    else if(r==11)
    printf("B");
    else if(r==12)
    printf("C");
    else if(r==13)
    printf("D");
    else if(r==14)
    printf("E");
    else if(r==15)
    printf("F");
    else
    printf("%ld",r);
}
int main()
{
    long int decimal;
    while(scanf("%ld",&decimal)!=EOF)
    {
        if(decimal==0)
        printf("0\n");
        else
        {
        deci_hexa(decimal);
        printf("\n");
        }
    }
    return 0;
}

