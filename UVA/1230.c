//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int square(long int x)
{
    x=x*x;
    return x;
}
long bigmod(long B,long P,long M)
{
    long v,n;
    if(P==0)
    return 1;
    else if(P%2==0)
    {
    v=square(bigmod(B,P/2,M));
    return v%M;
    }
    else
    return ((B%M)*bigmod(B,P-1,M))%M;
}
int main()
{
    long int B,P,M,r,T,i;
    while(scanf("%ld",&T))
    {
        if(T==0)
        break;
        for(i=1;i<=T;i++)
        {
        scanf("%ld%ld%ld",&B,&P,&M);
        r=bigmod(B,P,M);
        printf("%ld\n",r);
        }
    }
    return 0;
}
