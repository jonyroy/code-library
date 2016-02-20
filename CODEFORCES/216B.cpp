#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k,l,r,s,ss,c[1005]={0};
     cin>>n>>k>>l>>r>>s>>ss;
     int nn=ss/k;
     for(int i=1;i<=k;i++)
        c[i]=nn;
        nn=ss%k;
     for(int i=1;i<=nn;i++)
     c[i]++;
     if(n!=k)
        {
     nn=(s-ss)/(n-k);
     for(int i=n;i>k;i--)
        c[i]=nn;
        int j=(s-ss)%(n-k);
     for(int i=k+1;i<=k+j;i++)
        c[i]++;
        }
        for(int i=1;i<=n;i++)
            cout<<c[i]<<" ";
    return 0;
}
