//Accepted
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long int n,i,k,l,m,p=0;
    while(1)
    {
     scanf("%ld",&n);
     if(n==1)
     {
         printf("0\n");
         continue;
     }
    if(n==0)
    break;
    i=2;
    m=n;
    k=0;
    while(i<=(long)sqrt(n))
    {
        k++;
        while(n%i==0)
        {
            p=1;
            n=n/i;
        }
        if(p==1)
        {
            m=(m/i)*(i-1);
            p=0;
        }
        if(k>1)
        i+=2;
        else
        i++;
    }
    if(n>1)
     m=(m/n)*(n-1);
     printf("%ld\n",m);
    }
    return 0;
}

