#include<bits/stdc++.h>
using namespace std;

#define ms0(x) memset(x,0,sizeof(x))
#define ms1(x) memset(x,-1,sizeof(x))
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define f first
#define s second
#define inf 1001001001
#define mp make_pair
typedef pair<int,int> pii;
typedef long long ll;
typedef unsigned long long ull;
const double eps = 1e-9;
const double pi = acos(-1.0);
const int maxn = (int)1e5 + 10;
const int mod = (int)1e9;
int a[10000];
int dp[10000];
//A(k) ... A(j) for which the sum of elements in the
//subsequence is maximized.
int call(int k,int j)
{
    if(j==k)
    return a[j];
    if(dp[j]!=-1)
    return dp[j];
    dp[j]=max(call(k,j-1)+a[j],a[j]);
    return dp[j];
}
int call_itarative(int k,int j)//A(k) ... A(j)
{
    int i;
    dp[k]=a[k];
    for(i=k+1;i<=j;i++)
    dp[i]=max(dp[i-1]+a[i],a[i]);
    return dp[j];
}
int main(){
    int n,i;
    ms1(dp);
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<call(0,n-1)<<endl;
    cout<<call_itarative(0,n-1)<<endl;

return 0;
}
