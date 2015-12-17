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

char A[1000],B[1000],mz[1000][1000];
int len(int i,int j)
{
    if(i<0||j<0)
    return 0;
    if(mz[i][j]!=-1)
    return mz[i][j];
    if(A[i]==B[j])
    return mz[i][j]=len(i-1,j-1)+1;
    else
    return mz[i][j]=max(len(i,j-1),len(i-1,j));
}
int main(){
    while(scanf("%s%s",A,B)!=EOF)
    {
        ms1(mz);
        cout<<len(strlen(A)-1,strlen(B)-1)<<endl;
    }
    return 0;
}


