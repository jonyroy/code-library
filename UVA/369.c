//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int pi[100]={0};
int prime[100]={2};
int store[105][105]={0};
int prime_number()
{
    int n,i,j,k=1,m,l,p,jony;
    for(i=3;i<=10;i+=2)
    {
        if(pi[i]==0)
        {
            prime[k++]=i;
            for(j=i*i;j<=100;j+=i+i)
            {
                pi[j]=1;
            }
        }
    }
    for(j=i;j<=100;j+=2)
    {
        if(pi[j]==0)
        prime[k++]=j;
    }
    return 0;
}
int factor()
{
        int i,m,j,k=2;
        while(k<=100)
        {
        i=2;
        while(i<=k)
        {
            m=i;
            j=0;
            while(prime[j]<=(int)sqrt(m))
            {
                while(m%prime[j]==0)
                {
                    store[k][prime[j]]++;
                    m/=prime[j];
                }
                j++;
            }
            if(m>1)
            store[k][m]++;
            i++;
        }
        k++;
        }
    return 0;
}
int main()
{
    prime_number();
    factor();
    int n,m,p,i;
    long long sum;
    while(scanf("%d%d",&n,&m))
    {
        int c[105]={0},d[105]={0};
        if(n==0&&m==0)
        break;
        p=n-m;
        for(i=0;i<=100;i++)
        {
            c[i]=store[p][i]+store[m][i];
        }
        for(i=0;i<=100;i++)
        {
            d[i]=store[n][i]-c[i];
        }
        sum=1;
        for(i=1;i<=100;i++)
        {
            if(d[i]>0)
            sum=sum*(long long)pow((double)i,(double)d[i]);
        }
        printf("%d things taken %d at a time is %lld exactly.\n",n,m,sum);
    }
    return 0;
}
