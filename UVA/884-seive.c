//Runtime Error
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define MAX 1000000
int prime[50000]={0};
long int store[MAX];
long int Isprime[1000]={2};
int primeN()
{
    long int i,j,k=1;
    for(i=3;i<=ceil(sqrt(sqrt(MAX)));i+=2)
    {
        if(prime[i]==0)
        {
            Isprime[k++]=i;
            for(j=i*i;j<=ceil(sqrt(MAX));j+=i+i)
            {
                prime[j]=1;
            }
        }
    }
    for(j=i;j<=(long)sqrt(MAX);j+=2)
    {
        if(prime[j]==0)
        Isprime[k++]=j;
    }
    return 0;
}
int main()
{
    long int i,p,j,l;
    long int N,sum=0,k,n;
    primeN();
    l=2;
    while(l<=MAX)
    {
        N=l;
        i=0;
        j=0;
        while(Isprime[i]<=(long)sqrt(N))
        {
            while(N%Isprime[i]==0)
            {
                j++;
                N=N/Isprime[i];
            }
            i++;
        }
       if(N>1)
        j++;
        sum=sum+j;
       store[k]=sum;
       l++;
    }
    while(scanf("%ld",&n)!=EOF)
    {
       printf("%ld\n",store[n]);
    }
    return 0;
}
