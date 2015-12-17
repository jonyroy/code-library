//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int sum;
    long long int prime[10]={2,3,5,7,11,13,17,19},m,l,k;
    long long int len,n,i=1,j,T;
    char jony[50];
    scanf("%lld",&T);
    while(i<=T)
    {
        int store[100]={0},up[25]={0},down[25]={0},val[25]={0},p=0;
        scanf("%s",jony);
        len=strlen(jony);
        if(len>20)
        {
           printf("Data set %lld: 0\n",i);
           i++;
           continue;
        }
        for(j=0;j<len;j++)
        {
            if(jony[j]>='a'&&jony[j]<='z')
            {
                p=1;
                break;
            }
            store[jony[j]]++;
        }
        if(p==1)
        {
           printf("Data set %lld: 0\n",i);
           i++;
           continue;
        }
        for(j=65;j<=90;j++)
        {
            n=store[j];
            if(n>1)
            {
                for(k=2;k<=n;k++)
                {
                    m=k;
                    l=0;
                    while(m>1)
                    {
                        if(m%prime[l]==0)
                        {
                            down[prime[l]]++;
                            m=m/prime[l];
                            l--;
                        }
                        l++;
                    }
                }
            }
        }
        for(j=2;j<=len;j++)
        {
            n=j;
            k=0;
            while(n>1)
            {
                if(n%prime[k]==0)
                {
                    up[prime[k]]++;
                    n=n/prime[k];
                    k--;
                }
                k++;
            }
        }
        sum=1;
        for(j=0;j<20;j++)
        {
             val[j]=up[j]-down[j];
             sum=sum*pow(j,val[j]);
        }
        printf("Data set %lld: %lld\n",i,sum);
        i++;
    }
    return 0;
}
