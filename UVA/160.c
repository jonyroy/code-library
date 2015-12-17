//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define MAX 10000
int pi[100]={0};
int prime[100]={2};
int main()
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
    while(scanf("%d",&n))
    {
        p=0;
        jony=0;
        int store[100]={0};
        if(n==0)
        break;
        i=2;
        while(i<=n)
        {
            m=i;
            j=0;
            while(prime[j]<=(int)sqrt(m))
            {
                while(m%prime[j]==0)
                {
                    store[prime[j]]++;
                    m/=prime[j];
                }
                j++;
            }
            if(m>1)
            store[m]++;
            i++;
        }
        l=1;
        printf("%3d! =",n);
        for(k=2;k<=97;k++)
        {
            if(store[k]>0)
            {
                if(l==16)
                {
                p=1;
                printf("\n");
                break;
                }
                printf("%3d",store[k]);
                l++;
            }
        }
        if(p==1)
        {
        for(j=k;j<=97;j++)
        {
           if(store[j]>0)
           {
               jony=1;
               if(p==1)
               {
               printf("      ");
               p=0;
               }
               printf("%3d",store[j]);
           }
        }
        printf("\n");
        }
        else
        printf("\n");
    }
    return 0;
}
