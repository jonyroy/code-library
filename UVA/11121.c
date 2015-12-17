//Accepted
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include<string.h>
#include<complex.h>
int base(long long n)
{
    long long c,r,b=-2;
    if(n==0)
    return 0;
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
    printf("%lld",r);
}
int main()
{
    long long int T,n,i=1;
    scanf("%lld",&T);
    while(i<=T)
    {
        scanf("%lld",&n);
        if(n==0)
        {
            printf("Case #%lld: 0\n",i);
            if(i==T)
            break;
            else
            {
                i++;
            continue;
            }
        }
        printf("Case #%lld: ",i);
        base(n);
        printf("\n");
        i++;
    }
    return 0;
}
