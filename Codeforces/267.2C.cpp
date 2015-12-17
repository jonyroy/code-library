#include<bits/stdc++.h>
using namespace std;
long long int dp[5005][5005];
int main()
{
    int n,m,k;
    long long a[5005];
    scanf("%d%d%d",&n,&m,&k);
    for(int i=1;i<=n;i++)
        scanf("%I64d",&a[i]);
    for(int i=2;i<=n;i++)
        a[i]+=a[i-1];
    for(int i=m;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
            {
            dp[i][j]=max(dp[i][j],dp[i-m][j-1]+a[i]-a[i-m]);
            dp[i][j]=max(dp[i][j],dp[i-1][j]);
            }
    }
    printf("%I64d\n",dp[n][k]);
    return 0;
}
