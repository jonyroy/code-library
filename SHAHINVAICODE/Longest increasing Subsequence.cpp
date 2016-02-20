//DER.......
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
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
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
int A[1000],n;
int HT[1000];
int Dir[1000];
int LIS[1000],lis=0;
int M=0,N=0,nlis=0,maxlis=0;
int Call(int i)
{
    if(i>n)
    return 0;
    if(HT[i]!=-1)
    return HT[i];
    int max=0,T;
    for(int j=i+1;j<=n;j++)
    {
        if(A[j]>=A[i])
        {
            T=Call(j);
            if(T>max)
            max=T;
        }
    }
    HT[i]=1+max;

    return HT[i];
}
void print(int i,int count)
{
    if(i>n)
    return ;
    if(Dir[i]!=-1)
    return ;
    else
    Dir[i]=1;
    if(count==M)
    N=1;
    if(N==0)
    for(int j=i+1;j<=n;j++)
    {
        if(A[j]>=A[i])
        {
            print(j,count+1);

        }
    }
    if(N==1)
    {
        LIS[lis]=A[i];
        lis++;
    }
}
int main(){
    int i,start,T;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&A[i]);
    start=1;
    int max=0;
    for(i=1;i<=n;i++)
    {
         MS1(HT);
        T=Call(i);
        if(T>max)
        {
            max=T;
            start=i;
        }
    }

    M=max;N=0;
    MS1(Dir);
    print(start,1);
    cout<<max<<" >> "<<lis-max+1<<endl;
    for(i=lis-1;i>=0;i--)
    cout<<LIS[i]<<" ";
    return 0;
}


