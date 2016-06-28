#include<bits/stdc++.h>
using namespace std;

int josephus(int n, int k)
{
  if (n==1)
    return 1;
  else
    return (josephus(n - 1, k) + k-1) % n + 1;
}
int main()
{
    int dp[32777];
    dp[0]=0;
    dp[1]=2;
    dp[2]=3;
    dp[3]=6;
    for(int i=4;i<=32767;i++)
    {
        int k=josephus(i,2);
        if(k==i)
        {
            dp[k]=k*2;
        }
        else
        dp[i]=dp[k]+(i-k);
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",dp[n]);
    }
    return 0;
}
