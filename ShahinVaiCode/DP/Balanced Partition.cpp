#include<bits/stdc++.h>
using namespace std;

// #defines
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define sz(x) ((int)(x).size())
#define ms0(x) memset(x,0,sizeof(x))
#define ms1(x) memset(x,-1,sizeof(x))
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define f first
#define s second
#define mp make_pair
#define pb push_back
#ifdef ONLINE_JUDGE
#define FILEIO(x) freopen(#x ".in","r",stdin);freopen(#x ".out","w",stdout);
#define FILEIOS freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define FILEIO(x) ;
#define FILEIOS ;
#endif
#define inf 1001001001
typedef pair<int,int> pii;
typedef long long ll;
typedef unsigned long long ull;
const double eps = 1e-9;
const double pi = acos(-1.0);
const int maxn = (int)1e5 + 10;
const int mod = (int)1e9;
int fastMax(int x, int y) { return (((y-x)>>(32-1))&(x^y))^y; }
int fastMin(int x, int y) { return (((y-x)>>(32-1))&(x^y))^x; }
int wi[1005],n=0,cap=0,mn=100000,fv,v,itms=0;
int HT[1005][40];
//bitmask dp for solve knapsack problem
long call(int i,long w,int it)
{
    if(i==n+1)
    {
        v=abs(cap-2*w);
            if(mn>v)
            {
                fv=w;
                mn=v;
                itms=it;
            }
            return 1;
    }
    if(HT[i][w]!=-1)
    return HT[i][w];
    if(abs(cap-2*w)<abs(cap-2*w-2*wi[i]))
        {
            v=abs(cap-2*w);
            if(mn>v)
            {
                fv=w;
                mn=v;
                itms=it;
            }
        }
        else
        {
            v=abs(cap-2*w-2*wi[i]);
            if(mn>v)
            {
                fv=w+wi[i];
                mn=v;
                itms=it|1<<i;
            }
        }

    int profit1=0,profit2=0,x;
    if(2*(w+wi[i])<cap)
    {
        x=it|1<<i;
         profit1=call(i+1,w+wi[i],x);
    }
    profit2= call(i+1,w,it);
    HT[i][w]=min(profit1,profit2);
    return HT[i][w];

}
int main()
{
    ms1(HT);
    long i,s=0,v,sv;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>wi[i];
        s=s+wi[i];
    }
    cap=s;
   itms=0;
    v=call(1,0,0);
    sv=s-fv;
    //cout<<fv<<" "<<sv<<endl;
    cout<<"{ ";
    for(i=1;i<=n;i++)
    if((itms&(1<<i))!=0)
    cout<<wi[i]<<" ";
    cout<<"}="<<fv<<endl;

    cout<<"{ ";
    for(i=1;i<=n;i++)
    if((itms&(1<<i))==0)
    cout<<wi[i]<<" ";
    cout<<"}="<<sv<<endl;
    return 0;
}


