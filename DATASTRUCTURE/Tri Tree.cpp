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
struct node
{
    char v;
    int r;
    int c;
    bool eow;
};
vector< node > T;
void insert_word(char str[])
{
    int i,j,s,n;
    int l=strlen(str);
    j=0;s=0;i=0;
    for(i=0;i<l;i++)
    {
        j=1;
        while(1)
        {
            if(T[s].v==str[i])
            {
                if(T[s].r>0)
                {
                    s=T[s].r;
                    j=0;
                }
                else
                {
                    n=T.size();
                    for(i=i+1;i<l;i++)
                    {
                        T[s].r=n;
                        node temp={str[i],0,0,0};
                        T.push_back(temp);
                        s=n;
                        n++;
                    }
                    T[s].eow=1;
                }
                break;
            }
            else if(T[s].c>0)
            {
                s=T[s].c;
            }
            else
            {
                n=T.size();
                T[s].c=n;
                node temp={str[i],0,0,0};
                T.push_back(temp);
                s=n;
                n++;
                for(i=i+1;i<l;i++)
                {
                    T[s].r=n;
                    node temp={str[i],0,0,0};
                    T.push_back(temp);
                    s=n;
                    n++;
                }
                T[s].eow=1;
                break;
            }
        }
        if(j==1)
        break;
    }
}
int Search_word(char str[])
{
    int i,j,s;
    int l=strlen(str);
    j=0;s=0;
    for(i=0;i<l&&j==0;i++)
    {
        j=1;
        while(1)
        {
            if(T[s].v==str[i])
            {
                if(T[s].eow==1&&i==l-1)
                return 1;
                s=T[s].r;
                j=0;
                break;
            }
            else if(T[s].c>0)
            s=T[s].c;
            else
            break;
        }
    }
  return 0;
}
int main()
{
    node temp={'a',0,0,0};
    T.push_back(temp);
    int i,n,j;
    char str[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        insert_word(str);
    }
    printf("Search word:\n");
    while(scanf("%s",str)!=EOF)
      {
       j= Search_word(str);
       if(j==1)
       printf("Find this word.\n");
       else
       printf("Not found.\n");
      }
return 0;
}
