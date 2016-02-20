#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 100000
long long int store[MAX],prime[MAX]={0};
int main()
{
    long long int a,b,i,j,k=2,p;
    store[1]=2;
    for(i=3;i<=(long long)sqrt((double)sqrt((double)MAX));i+=2)
    {
        if(prime[i]==0)
        {
        store[k++]=i;
        for(j=i*i;j<=(long long)sqrt((double)MAX);j+=i+i)
        {
            prime[j]=1;
        }
        }
    }
    long long d=(long long)sqrt((double)sqrt((double)MAX));
    if(d%2==0)
    d=d+1;
    for(i=d;i<=(long long)sqrt((double)MAX);i+=2)
    {
        if(prime[i]==0)
        store[k++]=i;
    }
    d=(long long)sqrt((double)MAX);
    if(d%2==0)
    d=d+1;
    for(i=d;i<=MAX;i+=2)
    {
        j=2;
        p=0;
        while(store[j]<=(long long)sqrt((double)i))
        {
            if(i%store[j]==0)
            {
                p=1;
                break;
            }
            j++;
        }
        if(p==0)
        store[k++]=i;
    }
    printf("\n%lld\n",k-1);
    return 0;
}
