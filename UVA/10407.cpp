//Accepted
#include<iostream>
#include<stdio.h>
#include<algorithm>
#define MAX 1001
using namespace std;
long gcd(long a,long b)
{
    long d;
    if(a==0&&b==0)
    return 1;
    else if(a==0)
    return b;
    else if(b==0)
    return a;
    while(a%b!=0)
    {
        d=a%b;
        a=b;
        b=d;
    }
    return b;
}
int main()
{
    long int m[MAX],n[MAX],i=0;
    long int temp,b,j,g,val;
    while(scanf("%ld",&val)&&val)
    {
        i=0;
        m[i++]=val;
        while(scanf("%ld",&val)&&val)
        {
            m[i++]=val;
        }
        b=i-1;
     sort(m,m+i);
     for(i=1;i<=b;i++)
     {
         n[i]=m[i]-m[0];
     }
     if(b==1)
     {
         printf("%ld\n",n[1]);
         continue;
     }
     for(i=1;i<b;i++)
     {
         g=gcd(n[i],n[i+1]);
         n[i+1]=g;
     }
     printf("%ld\n",g);
    }
    return 0;
}
