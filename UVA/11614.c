//Accepted
#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,m,T,sum,count;
        scanf("%lld",&T);
        while(T)
        {
            scanf("%lld",&n);
            sum=(sqrt(1+8*n)-1)/2;
            printf("%lld\n",sum);
            T--;
        }
    return 0;
}
