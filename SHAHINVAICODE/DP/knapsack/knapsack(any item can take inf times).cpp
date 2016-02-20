
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
int s[100],v[100];//s[item],v[item]
int dp[100005];//dp[capacity+5]
int n;
//any item can take inf times....
int call(int j)
{
    if(j==0)
    return 0;
    if(dp[j]!=-1)
    return dp[j];
    int p=0;
    for(int i=0;i<n;i++)
    if(j-s[i]>=0)
    {
        p=max(p,call(j-s[i])+v[i]);
    }
    else
    break;

  return dp[j]=max(call(j-1),p);
}

int main(){
    ms1(dp);
int i,w;
cin>>n;
for(i=0;i<n;i++)
cin>>s[i];
//if s is not sorted then sort
//sort(s,s+n);
for(i=0;i<n;i++)
cin>>v[i];
cin>>w;
cout<<call(w)<<endl;
return 0;
}
