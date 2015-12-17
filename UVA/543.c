//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 1000000
int store[MAX]={0};
int jony(long int n)
{
    long int i,p=0;
    for(i=3;i<=n/2;i++)
    {
        if((store[i]==0)&&(store[n-i]==0))
        {
            printf("%ld = %ld + %ld\n",n,i,n-i);
            p=1;
            break;
        }
    }
    if(p==0)
    printf("Goldbach's conjecture is wrong.\n",n);
    return 0;
}
int main()
{
    long long int i,j,n;
    for(i=2;i<=(long)(sqrt((double)MAX));i++)
    {
      if(store[i]==0)
      {
          for(j=i*i;j<=MAX;j+=i)
          {
              store[j]=1;
          }
      }
    }
    while(1)
    {
        scanf("%ld",&n);
        if(n==0)
        break;
        jony(n);
    }
    return 0;
}
