//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define ll long long
int main()
{
    ll n,r,i;
    double digit;
    while(scanf("%lld%lld",&n,&r)!=EOF)
    {
        digit=0.0;
        if(r>n-r)
        {
            for(i=r+1;i<=n;i++)
            digit+=log10(i)-log10(n-i+1);
        }
        else
        {
            for(i=n-r+1;i<=n;i++)
            digit+=log10(i)-log10(n-i+1);
        }
        digit=floor(digit+1);
        printf("%0.0lf\n",digit);
    }
    return 0;
}
