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
int v[10000];
int dp[10000];
/*Making Change. You are given n types of coin denominations
of values v(1) < v(2) < ... < v(n) (all integers).
Assume v(1) = 1, so you can always make change for any amount
of money C. Give an algorithm which makes change for an amount
of money C with as few coins as possible. */
int n=3;
int call(int j)
{
    if(j==0)
    return 0;
    if(dp[j]!=-1)
    return dp[j];
    int mv=inf,i;
    for(i=0;i<n;i++)
    if(j-v[i]>=0)
    mv=min(mv,call(j-v[i]));
    dp[j]=mv+1;
    return dp[j];
}

int main(){
    v[0]=1,v[1]=3,v[2]=5;
    int j;
    ms1(dp);
    cin>>j;

    cout<<call(j)<<endl;

return 0;
}
