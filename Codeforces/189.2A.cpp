#include<bits/stdc++.h>
using namespace std;
int dp[4005];
int main()
{
  int n,a,c,b;
  cin>>n>>a>>b>>c;
  for(int i=1;i<=4000;i++)
  {
    if(i>=a&&dp[i-a]>0)
    dp[i]=max(dp[i],dp[i-a]+1);
    if(i>=b&&dp[i-b]>0)
    dp[i]=max(dp[i],dp[i-b]+1);
    if(i>=c&&dp[i-c]>0)
    dp[i]=max(dp[i],dp[i-c]+1);
    if(a==i||b==i||c==i)
    dp[i]=max(dp[i],1);
  }
  cout<<dp[n];
}
