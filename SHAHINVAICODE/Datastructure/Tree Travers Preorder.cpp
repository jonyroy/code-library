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
void PreOrder(char I[],int L[],int R[],int r)//PreOrder Traversing
{
    cout<<I[r]<<" ";
    if(L[r]>0)
    PreOrder(I,L,R,L[r]);
    if(R[r]>0)
    PreOrder(I,L,R,R[r]);
}
void PostOrder(char I[],int L[],int R[],int r)//PostOrder Traversing
{

    if(L[r]>0)
    PostOrder(I,L,R,L[r]);
    if(R[r]>0)
    PostOrder(I,L,R,R[r]);
    cout<<I[r]<<" ";
}
void InOrder(char I[],int L[],int R[],int r)//InOrder Traversing
{

    if(L[r]>0)
    InOrder(I,L,R,L[r]);
    cout<<I[r]<<" ";
    if(R[r]>0)
    InOrder(I,L,R,R[r]);
}
int main(){
    char I[]={' ','K','C','G',' ','A','H','L',' ',' ','B',' ','F','E',' ',' ',' ','J','D',' ',' '};
    int L[]={0,0,3,0,14,10,17,0,9,4,18,19,0,12,15,16,11,7,0,20,0};
    int R[]={0,0,6,0,0,2,1,0,0,0,13,0,0,0,0,0,0,0,0,0,0};
    cout<<"PreOrder Traversing:\n";
    PreOrder(I,L,R,5);//PreOrder Traversing
    cout<<"\nPostOrder Traversing:\n";
    PostOrder(I,L,R,5);//PostOrder Traversing
    cout<<"\nInOrder Traversing:\n";
    InOrder(I,L,R,5);//InOrder Traversing

    return 0;
}


