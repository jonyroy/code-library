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
 vector<string>A[20];
void RadixCount(int l)
{

    vector<string>T;
    int C[102],i,j,n;
    int p=l-1;
     n=A[l].size();
    while(p>=0)
    {
        T.clear();
        for(i=0;i<n;i++)
        {
            T.push_back(A[l][i]);
        }
        for(i='0';i<='9';i++)
         C[i]=0;

    for(j=0;j<n;j++)
    C[T[j][p]]++;
    for(i='1';i<='9';i++)
    C[i]=C[i]+C[i-1];
    for(j=n-1;j>=0;j--)
    {
        A[l][C[T[j][p]]-1]=T[j];
        C[T[j][p]]=C[T[j][p]]-1;
    }
    p--;
    }
}
void RadixSort(int max)
{
    int i,n;
    for(i=1;i<=max;i++){
    RadixCount(i);
    n=A[i].size();
    LPI(j,n)
    cout<<A[i][j]<<" ";
    }
}
int main(){

    char str[100];
    int max=0,l;
    RI(n);
    LPI(i,n)
    {
        scanf("%s",str);
        l=strlen(str);
        A[l].push_back(str);
        if(l>max)
        max=l;
    }
    RadixSort(max);

    return 0;
}


