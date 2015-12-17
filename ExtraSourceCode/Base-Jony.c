#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include<string.h>
#include<complex.h>
#define MAX 100000
int b;
int base(long n)
{
    long c,r;
    if(n==0)
    return 0;
    c=n/b;

    r=n-b*c;
    printf("%ld\n",r);
    if(r<0)
    {
        n=c+1;
        r=r+(-1)*b;
    }
    else
    n=c;
    base(n);
    printf("%ld",r);
}
int main()
{
    long n,i,t;
    while(1)
    {
        printf("Enter The Value:");
        scanf("%ld",&n);
        printf("\nEnter Base:");
        scanf("%ld",&b);
        if(n==0&&b==0)
        break;
        base(n);
        if(n==0)
        printf("0");
        printf("\n");
    }
    return 0;
}
