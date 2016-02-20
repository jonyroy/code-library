#include<bits/stdc++.h>
using namespace std;
int primeStore[1000000],a[5000005],c[5000005];
int main()
{
    int k=0,l=0;
    for(int i=2;i<=sqrt(5000000);i++)
    {
        if(a[i]==0)
        {
            for(int j=i;j<=5000000;j+=i)
                a[j]=1;
            primeStore[++k]=i;
        }
        l=i;
    }
    for(int i=l+1;i<=5000000;i++)
        if(a[i]==0)
        primeStore[++k]=i;
    c[1]=0,c[2]=1,c[3]=2,c[4]=4,c[5]=5;
    for(int i=6;i<=5000000;i++)
    {
       int b=i,cnt=0,r=1;
       while(b>1)
       {
           if(a[b]==0)
           {
               cnt++;
               break;
           }
           if(b%primeStore[r]==0)
           {
               b=b/primeStore[r];
               cnt++;
           }
           else
            r++;
       }
       c[i]=c[i-1]+cnt;
    }
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        printf("%d\n",c[n]-c[m]);
    }
    return 0;
}
