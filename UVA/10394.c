//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 20000000
#define M 2147483647
int store[MAX]={0};
long int twinpirme[MAX];
int main()
{
    long int i,j,n;
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
    j=1;
    for(i=3;i<=MAX;i+=2)
    {
        if(store[i]==0&&store[i+2]==0)
        twinpirme[j++]=i;
    }
    while(scanf("%ld",&n)!=EOF)
    {
        printf("(%ld, %ld)\n",twinpirme[n],twinpirme[n]+2);
    }
return 0;
}
