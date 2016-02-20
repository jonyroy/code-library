#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<time.h>
int base(long n)
{
    long c,r,b=2;
    if(n==0)
    return ;
    c=n/b;
    r=n-b*c;
    if(r<0)
    {
        n=c+1;
        r=r+(-1)*b;
    }
    else
    n=c;
    base(n);
    printf("%ld",r);
    return 0;
}
int main()
{

    long int d;
    while(scanf("%ld",&d)!=EOF)
    {
        if(d==0)
        printf("0\n");
        else
        {
        base(d);
        printf("\n");
        }
    }
    return 0;
}
