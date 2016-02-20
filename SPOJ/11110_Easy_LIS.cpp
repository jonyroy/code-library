//AC
#include<bits/stdc++.h>
using namespace std;
int a[25],dp[25];
int LIS(int n)
{
    int ma=0;
    for(int i=n;i>=1;i--)
    {
       int m=0;
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]<a[j])
            {
                m=max(m,dp[j]);
            }
        }
        dp[i]=m+1;
        ma=max(ma,dp[i]);
    }
    return ma;
}
int main()
{
     int n;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
          cin>>a[i];
     }
     int b=LIS(n);
     cout<<b<<endl;
}
