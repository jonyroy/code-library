//Accepted
#include<stdio.h>
#include<string.h>
int main()
{
    long long int m[60],i,j,tem,n;
    m[0]=1;
    m[1]=2;
    for(i=2;i<=51;i++)
    {
        m[i]=m[i-1]+m[i-2];
    }
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&tem);
        printf("Scenario #%lld:\n",i);
        printf("%lld\n\n",m[tem]);

    }
    return 0;
}
