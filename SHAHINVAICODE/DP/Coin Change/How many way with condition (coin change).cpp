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
/* How many way Making Change. You are given n types of coin
denominations of values v(1) < v(2) < ... < v(n) (all integers).
Assume v(1) = 1, so you can always make change for any amount
of money C. Give an algorithm which makes change for an amount
of money C. How many different way make change. */
int wi[200],c[200],bn=0,cap=0;
int HT[1003][51];
int MOD=100000007;
int num=0;
int Call(int i,int w)
{
    if(i>=bn+1)
    {
        if(w==cap)
        return 1;
        return 0;
    }
    if(w>cap)
    return 0;
    if(w==cap)
    return 1;
    if(HT[w][i]!=-1)
    return HT[w][i];

    int profit1=0,j;
    for(j=1;j<=c[i];j++)
    if(w+wi[i]*j<=cap)
    {

       profit1=profit1+Call(i+1,w+wi[i]*j)%MOD;
    }

   profit1=(profit1+ Call(i+1,w)%MOD)%MOD;
    HT[w][i]=profit1;

    return HT[w][i];

}
int main(){
   int n,i,t,k,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        ms1(HT);
        scanf("%d%d",&n,&k);
        bn=n;
        for(j=1;j<=n;j++)
        scanf("%d",&wi[j]);
        for(j=1;j<=n;j++)
        scanf("%d",&c[j]);
        cap=k;
        k=Call(1,0)%MOD;
        printf("Case %d: %d\n",i,k);
    }

    return 0;
}
