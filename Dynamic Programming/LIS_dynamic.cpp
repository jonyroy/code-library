#include<bits/stdc++.h>
using namespace std;
int start,dp[10000],path[10000];
int lis_dynamic(int n,int a[])
{
   int m=0;
   start=n;
    for(int i=n;i>=1;i--)
    {
        int ma=0;
         for(int j=i+1;j<=n;j++)
         {
             if(a[i]<a[j]&&ma<dp[j])
             {
                 ma=dp[j];
                 path[i]=j;
             }
         }
         dp[i]=ma+1;
        if(m<dp[i])
        {
           m=dp[i];
           start=i;
        }
    }
    return m;
}
int path_print(int s,int len,int a[])
{
    for(int i=1;i<=len;i++)
    {
         cout<<a[s]<<" ";
         s=path[s];
    }
}
int main()
{
     int n,a[10000];
     cin>>n;
     for(int i=1;i<=n;i++)
     cin>>a[i];
     int b=lis_dynamic(n,a);
     cout<<b<<endl;
     path_print(start,b,a);
}
