//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 100000000
int store[MAX]={0};
int jony(long long int n)
{
    long long int i,p,q;
    if(n%2==1)
    {
        if(store[n-2]==0)
        printf("%lld is the sum of 2 and %lld.\n",n,n-2);
        else
        printf("%lld is not the sum of two primes!\n",n);
    }
    else
    {
        p=n/2;
        q=p;
        if(p%2==0)
        {
            p=p+1;
            q=q-1;
        }
    for(i=2;i<=p;i+=2)
    {
        if((store[p-i]==0)&&(store[q+i]==0))
        {
            printf("%lld is the sum of %lld and %lld.\n",n,p-i,q+i);
            break;
        }
    }
    }
    return 0;
}
int main()
{
    long long int i,j,n;
    for(i=3;i<=(long long int)(sqrt((double)MAX));i+=2)
    {
      if(store[i]==0)
      {
          for(j=i*i;j<=MAX;j+=i+i)
          {
              store[j]=1;
          }
      }
    }
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==1||n==2||n==4||n==6||n==3)
        printf("%lld is not the sum of two primes!\n",n);
        else
        jony(n);
    }
    return 0;
}
