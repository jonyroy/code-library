//Accepted
#include<stdio.h>
int main()
{
    long long int n,i,a,b,c;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
        break;
        b=1;
        c=0;
     for(i=1;i<=n;i++)
     {
         a=b+c;
         c=b;
         b=a;
     }
     printf("%lld\n",a);
    }
    return 0;
}
