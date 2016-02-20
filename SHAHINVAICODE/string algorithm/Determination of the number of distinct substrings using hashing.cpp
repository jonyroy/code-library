#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;

// #defines
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define LPI(i,n) for(int i=0;i<(n);i++)
#define LPI1(i,a,b) for(int i=(a);i<=(b);i++)
#define LPIL(i,x) for(int i=0;x[i];i++)
#define LPD(i,n) for(int i=(n)-1;i>=0;i--)
#define LPD1(i,a,b) for(int i=(a);i>=(b);i--)
#define I(x) scanf("%d",&x)
#define RI(x) int x;I(x)
#define II(x,y) scanf("%d%d",&x,&y)
#define RII(x,y) int x,y;II(x,y)
#define III(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define RIII(x,y,z) int x,y,z;III(x,y,z)
#define RS(x) scanf("%s",x)
#define PI(x) printf("%d\n",x)
#define PIS(x) printf("%d ",x)
#define CASET int ___T,cas=1;scanf("%d ",&___T);while(___T--)
#define CASEN0(n) int cas=1;while(scanf("%d",&n)!=EOF&&n)
#define CASEN(n) int cas=1;while(scanf("%d",&n)!=EOF)
#define MP make_pair
#define PB push_back
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,-1,sizeof(x))
#define SEP(x) ((x)?'\n':' ')
#define F first
#define S second
#ifdef ONLINE_JUDGE
#define FILEIO(x) freopen(#x ".in","r",stdin);freopen(#x ".out","w",stdout);
#define FILEIOS freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define FILEIO(x) ;
#define FILEIOS ;
#endif
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
const double eps = 1e-9;
const double pi = acos(-1.0);
const int maxn = (int)1e5 + 10;
const int mod = (int)1e9;
//Determination of the number of distinct substrings
int main()
{

 string s; int i,j; // input
  cin>>s;
 // Assume all powers of p
  int n=s.length();
  const int p = 31;//Capital alphabet then p=53;
  vector <long long> p_pow(n);
  p_pow[0]=1;
  for (i=1;i<n;++i)
	 p_pow[i]=p_pow[i-1]*p;

 // Find the hashes of all prefixes
 vector <long long> h(n);
 for(i=0;i<n;++i)
 {
	 h[i]=(s[i]-'a'+1)*p_pow[i];
	 if(i)
	 h[i]+=h[i-1];
 }
 int result=0;
 for(i=1;i<=n;i++)
 {
     vector<long long> hs(n-i+1);
     for(j=0;j<n-i+1;j++)
     {
         long long cur_h=h[j+i-1];
         if(j)
         cur_h-=h[j-1];
         cur_h*=p_pow[n-i-j];
         hs[j]=cur_h;
     }
     sort(hs.begin(),hs.end());
     hs.erase(unique(hs.begin(),hs.end()),hs.end());
     result+=(int)hs.size();

 }
cout<<result<<endl;
return 0;
}
