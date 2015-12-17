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
int main(){
char s[1000];
int pm_n=0,max_=0,p=0,flag=0;
cin>>s;
int n=strlen(s);
vector < int > d1(n);
int l=0,r=-1 ;
for(int i=0;i<n;++i)
{
	int k=(i>r?0:min(d1[l+r-i],r-i))+1;
	while(i+k<n&&i-k>=0&&s[i+k]==s[i-k])
	  ++k ;
	d1[i]=k-- ;
	pm_n+=d1[i];
	if(d1[i]*2-1>max_)
	{
	    max_=d1[i]*2-1;
	    p=i-d1[i]+1,flag=1;
	}
	if(i+k>r)
		l=i-k, r=i+k;
}
vector < int >d2(n);
l=0, r=-1;
for(int i=0;i<n;++i)
 {
	int k=(i>r?0:min(d2[l+r-i+1],r-i+1))+1;
	while(i+k-1<n&&i-k>=0&&s[i+k-1]==s[i-k])
	 ++k;
	d2[i]=--k;
	pm_n+=d2[i];
	if(d2[i]*2>max_)
	{
	    max_=d2[i]*2;
	    p=i-d2[i],flag=2;
	}
	if(i+k-1>r)
		l=i-k, r=i+k-1;
}
cout<<"Number of Palindroms: "<<pm_n<<endl;
cout<<"Max Palindrom lenth: "<<max_<<endl;
for(int i=0;i<max_;i++)
cout<<s[p+i];
cout<<endl;
return 0;
}
