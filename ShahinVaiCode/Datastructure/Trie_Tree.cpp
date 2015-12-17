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
struct node
{
    char v;
    int r;
    int n;
    int eow;
};
vector< node > T;
char sym[3][3][3][3];
char A[25][25];
void insert_word(char str[])
{
    int l,s,pr,flag,tz,i;
    l=strlen(str);
    s=T[0].n;
    pr=0;
    for(i=0;i<l;i++)
    {
        flag=0;
        while(s>0)
        {
            pr=s;
            if(T[s].v==str[i])
            {
                s=T[s].n;
                flag=1;

                break;
            }
            else
            {
                s=T[s].r;
            }
        }
        if(s==0)
        {
            tz=T.size();
            if(flag==0&&pr>0)
            {
                T[pr].r=tz;
                node nd={str[i],0,0,0};
                T.push_back(nd);
                cout<<pr<<"->"<<tz<<"("<<str[i]<<") ";
                pr=tz;
                tz++;
                i++;
            }
            if(flag==1)
            i++;
            for(;i<l;i++)
            {
                T[pr].n=tz;
                node nd={str[i],0,0,0};
                T.push_back(nd);
                cout<<pr<<"v"<<tz<<"("<<str[i]<<") ";
                pr=tz;
                tz++;
            }
            T[pr].eow=1;
            cout<<pr<<endl;
        }
    }
    T[pr].eow=1;
}

int main(){
int n,i;
char word[100];
cin>>n;
node nd={0,0,0,0};
T.push_back(nd);
for(i=0;i<n;i++)
{
    scanf("%s",word);
    insert_word(word);
}

return 0;
}
