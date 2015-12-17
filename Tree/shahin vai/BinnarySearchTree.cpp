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
    int Info;
    int L;
    int R;
};
vector< node > Tree;
void insert(int p,int v)
{
    if(Tree[p].Info<v)
    {
        if(Tree[p].R>0)
        insert(Tree[p].R,v);
        else
        {
            Tree[p].R=Tree.size();
            node V={v,0,0};
            Tree.push_back(V);
        }
    }
    else
    {
        if(Tree[p].L>0)
        insert(Tree[p].L,v);
        else
        {
            Tree[p].L=Tree.size();
            node V={v,0,0};
            Tree.push_back(V);
        }
    }
}
void PrintTree(int r)
{
    if(Tree[r].L>0)
    PrintTree(Tree[r].L);
    cout<<Tree[r].Info<<" ";
    if(Tree[r].R>0)
    PrintTree(Tree[r].R);
}
int Search(int r,int v)
{

    if(Tree[r].Info==v)
    {
        cout<<"Found"<<endl;
        return r;
    }
    else if(Tree[r].R==0&&Tree[r].L==0)
    cout<<"Not Found"<<endl;
    else if(Tree[r].Info<v)
    return(Search(Tree[r].R,v));
    else
    return(Search(Tree[r].L,v));

}
int Minmum(int r,int pr)
{
    if(Tree[r].L==0)
    {
        Tree[pr].L=Tree[r].R;
        return Tree[r].Info;
    }
    else
    return(Minmum(Tree[r].L,r));
}
void DeleteNode(int r,int v,int pr,bool lr)
{
    if(Tree[r].Info==v)
    {
        if(Tree[r].R>0)
        {
           Tree[r].Info = Minmum(Tree[r].R,r);
        }
        else
        {
            if(lr==0)
            Tree[pr].L=Tree[r].L;
            else
            Tree[pr].R=Tree[r].L;
        }
        cout<<"Found and Deleted"<<endl;
    }
    else if(Tree[r].R==0&&Tree[r].L==0)
    cout<<"Not Found"<<endl;
    else if(Tree[r].Info<v)
    DeleteNode(Tree[r].R,v,r,1);
    else
    DeleteNode(Tree[r].L,v,r,0);
}
int main(){

    int p=1;
    node V={0,1,0};
        Tree.push_back(V);
        node V1={20,0,0};
        Tree.push_back(V1);
    RI(n);
    LPI(i,n)
    {
        RI(m);
        insert(Tree[0].L,m);
        cout<<"Insertion succesfully"<<endl;
        PrintTree(Tree[0].L);
    }
    cout<<"Enter value for Search. ";
    RI(v);
   Search(Tree[0].L,v);
   cout<<"Enter value for Delete. ";
    RI(d);
    DeleteNode(Tree[0].L,d,0,0);
    PrintTree(Tree[0].L);
    return 0;
}
