#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,T,i,m,sum;
    scanf("%lld",&T);
    while(T--)
    {
        sum=0;
        scanf("%lld",&n);
        if(n<=0)
        {
            printf("0\n");
            continue;
        }
        if(n%2==1&&n>1)
        {
            for(i=3;i<=n/2;i++)
            {
                sum=sum+n/i;
            }
            sum=sum+(n/2)+1+n+(n/2);
        }
        else
        {
            for(i=3;i<=n/2;i++)
            {
                sum=sum+n/i;
            }
            sum=sum+n/2+n+(n/2);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
