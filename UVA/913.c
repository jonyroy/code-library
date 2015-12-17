//Accepted
#include<stdio.h>
int main()
{

    long long int n,sum;//digit=((n+1)*(n+1))/2
    while(scanf("%lld",&n)!=EOF)
    {
        sum=(3*(n+1)*(n+1)-18)/2;
        printf("%lld\n",sum);
    }
    return 0;
}
