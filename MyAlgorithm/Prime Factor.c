#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define MAX 2150000000LL//The compiler can't handle this value
int prime[50000]={0};//cause it out of range so it turn into 64 bit To add LL
long int Isprime[10000]={2};
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
    long int i,p,list[100],j;
    long N;
    primeN();
    while(scanf("%ld",&N)!=EOF)
    {
        i=0;
        j=0;
        while(Isprime[i]<=(long)sqrt(N))
        {
            while(N%Isprime[i]==0)
            {
                list[j++]=Isprime[i];
                N=N/Isprime[i];
            }
            i++;
        }
        if(N>1)
        list[j++]=N;
        for(i=0;i<j;i++)
        {
        printf("%ld ",list[i]);
        }
        printf("\n");
    }
    return 0;
}
