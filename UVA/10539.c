#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 1000000
static char *store;
long long int almost[80070];
int main()
{
    long long int i,j,n,m,p,k=2,T,L,H,jony,t=0;
    store = (char*)malloc((1000000)*sizeof(char));
    for(i=0;i<=1000000;i++)
    store[i]=0;
    printf("%s\n",store);
    for(i=2;i<=1000;i++)
    {
      if(store[i]==0)
      {
          for(j=i*i;j<=1000000;j+=i)
          {
              store[j]=1;
          }
      }
    }
    for(i=2;i<=1000000;i++)
    {
      if(store[i]==0)
      {
          for(j=i*i;j<=1000000000000;j*=i)
          {
              almost[t++]=j;
          }
      }
    }
    scanf("%lld",&T);
    while(T--)
    {
        long int count=0;
        scanf("%lld%lld",&L,&H);
        for(i=0;i<t;i++)
        {
           if(almost[i]>=L&&almost[i]<=H)
            count++;
        }
         printf("%ld\n",count);
    }
    return 0;
}
