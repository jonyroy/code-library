#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 100010041
int store[MAX]={0};
int main()
{
    long long int i,j,n,m,number,count;
    double len;
    for(i=5;i<=(long)(sqrt((double)MAX));i+=2)
    {
      if(store[i]==0)
      {
          for(j=i*i;j<=MAX;j+=i+i)
          {
              store[j]=1;
          }
      }
    }
    while(scanf("%lld%lld",&n,&m)!=EOF)
    {
        count=0;
     for(i=n;i<=m;i++)
     {
         j=i*i+i+41;
         if(store[j]==0)
         count++;
     }
     len=((float)count/(float)(m-n+1))*100;
     printf("%.2lf\n",len);
    }
    return 0;
}
