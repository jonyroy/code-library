//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 5100
int store[MAX]={0};
int main()
{
    long long int i,j,n,m,p;
    for(i=3;i<=(long)(sqrt((double)MAX));i+=2)
    {
      if(store[i]==0)
      {
          for(j=i*i;j<=MAX;j+=i+i)
          {
              store[j]=1;
          }
      }
    }
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&m);
        p=m/2+1;
        if(p%2==0)
        {
            p++;
            while(1)
            {
                if(store[p]==0)
                {
                printf("%lld\n",p);
                break;
                }
                p+=2;
            }
        }
        else
            while(1)
            {
                if(store[p]==0)
                {
                printf("%lld\n",p);
                break;
                }
                p+=2;
            }
    }
    return 0;
}
