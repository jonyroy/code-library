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
char x[100],y[100];
int c[100][100],b[100][100];
int plm=0;
int LCS()
{
    int i,j;
    int m=strlen(x);
    int n=strlen(y);
    for(i=0;i<=m;i++)
    c[i][0]=0;
    for(i=0;i<=n;i++)
    c[0][i]=0;
    for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
      if(x[i-1]==y[j-1])
      {
          c[i][j]=c[i-1][j-1]+1;
          plm=MAX(plm,c[i][j]);
      }
      else
      {
          c[i][j]=0;
      }
      for(i=0;i<=m;i++)
      {for(j=0;j<=n;j++)
      printf("%d ",c[i][j]);
      printf("\n");
      }
      return plm;
}
void PrintLCS(int i,int j)
{
    if(i==0||j==0)
    return ;
    if(b[i][j]=='d')
    {
        PrintLCS(i-1,j-1);
        printf("%c",x[i-1]);
    }
    else if(b[i][j]=='u')
    PrintLCS(i-1,j);
    else
    PrintLCS(i,j-1);
}
int main(){
    //It's not work fine...........
while(1)
{
    scanf("%s",x);
    int l=strlen(x);
    for(int i=1;i<=l;i++)
    y[i-1]=x[l-i];
    y[l]='\0';
    plm=0;
    cout<<LCS()<<endl;
   // PrintLCS(strlen(x),strlen(y));
    cout<<endl;
}
    return 0;
}


