//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define MAX 1000000
long int store[MAX];
int main()
{
    long int n,i,j,k,sum=0,l,N;
    for(l=2;l<=MAX;l++)
    {
        N=l;
        k=1;
        j=0;
    for(i=2;i<=(long)sqrt(N);)
        {
            while(N%i==0)
            {
                j++;
                N/=i;
            }
            if(k>1)
            i+=2;
            else
            i++;
            k++;
        }
        if(N>1)
        j++;
        sum=sum+j;
        store[l]=sum;
    }
    while(scanf("%ld",&n)!=EOF)
    {
        printf("%ld\n",store[n]);
    }
    return 0;
}
