#include<stdio.h>
#include<string.h>
#include<math.h>
int ma(long long int a,long long int p)
{
    long long int tem,i,j,k,c,d,b,o;
        if(p==2)
        return ((a*a)%p);
        else
        {
          b=a*a;
          c=b;
          k=p/2;
          i=1;
          while(i<=k)
          {
              tem=b%p;
              b=(tem*c);
              i++;
          }
        }
    return b;
}
int main()
{
    long long int a,p,m;
    while(scanf("%lld%lld",&a,&p)!=EOF)
    {
        m=ma(a,p);
        printf("%lld\n",m);
    }
    return 0;
}
