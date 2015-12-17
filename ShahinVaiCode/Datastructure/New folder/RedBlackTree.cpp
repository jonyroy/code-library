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
    bool color;
    int key;
    int left;
    int right;
    int p;
};
vector< node > T;
int root=0;

void LeftRotate(int x)
{
   int y=T[x].right;
    T[x].right=T[y].left;

    if(T[y].left!=0)
      T[T[y].left].p=x;
    T[y].p=T[x].p;
    if(T[x].p==0)
       root=y;
    else if(x==T[T[x].p].left)
       T[T[x].p].left=y;
    else
       T[T[x].p].right=y;
    T[y].left=x;
    T[x].p=y;
}
void RightRotate(int x)
{
   int y=T[x].left;
    T[x].left=T[y].right;

    if(T[y].right!=0)
      T[T[y].right].p=x;
    T[y].p=T[x].p;
    if(T[x].p==0)
       root=y;
    else if(x==T[T[x].p].left)
       T[T[x].p].left=y;
    else
       T[T[x].p].right=y;
    T[y].right=x;
    T[x].p=y;
}
void BalanceBST(int z)
{
    int y;
    while(T[T[z].p].color==1)
    {
        if(T[z].p==T[T[T[z].p].p].left)
        {
            y=T[T[T[z].p].p].right;
            if(T[y].color==1)
            {
                T[T[z].p].color=0;//black
                T[y].color=0;
                T[T[T[z].p].p].color=1;
                z=T[T[z].p].p;
            }
            else
            {
                if(z==T[T[z].p].right)
                {
                    z=T[z].p;
                    LeftRotate(z);
                }
                T[T[z].p].color=0;
                T[T[T[z].p].p].color=1;
                RightRotate(T[T[z].p].p);
            }
        }
        else
        {

            y=T[T[T[z].p].p].left;
            if(T[y].color==1)
            {
                T[T[z].p].color=0;//black
                T[y].color=0;
                T[T[T[z].p].p].color=1;
                z=T[T[z].p].p;
            }
            else
            {
                if(z==T[T[z].p].left)
                {
                    z=T[z].p;
                    RightRotate(z);
                }
                T[T[z].p].color=0;
                T[T[T[z].p].p].color=1;
                LeftRotate(T[T[z].p].p);
            }
        }
    }
    T[root].color=0;
}
void InsertToBST(int z)
{
   int y=0;
   int x=root;
    while(x!=0)
    {
        y=x;
        if(T[z].key<T[x].key)
          x=T[x].left;
        else
          x=T[x].right;
    }
    T[z].p=y;
    if(y==0)
      root=z;
    else if(T[z].key<T[y].key)
      T[y].left=z;
    else
      T[y].right=z;
    T[z].left=0;
    T[z].right=0;
    T[z].color=1;
    BalanceBST(z);//That make balance BST
}
void Transplant(int u,int v)
{
    if(T[u].p==0)
    root=v;
    else if(u==T[T[u].p].left)
    T[T[u].p].left=v;
    else
    T[T[u].p].right=v;
    T[v].p=T[u].p;
}
void DeleteFixup(int x)
{
    int w;
    while(x!=root&&T[x].color==0)
    {
        if(x==T[T[x].p].left)
        {
            w=T[T[x].p].right;
            if(T[w].color==1)
            {
                T[w].color=0;
                T[T[x].p].color=1;
                LeftRotate(T[x].p);
                w=T[T[x].p].right;
            }
            if(T[T[w].left].color==0&&T[T[w].right].color==0)
            {
                T[w].color=1;
                x=T[x].p;
            }
            else
            {
                if(T[T[w].right].color==0)
                {
                    T[T[w].left].color=0;
                    T[w].color=1;
                    RightRotate(w);
                    w=T[T[x].p].right;
                }
                T[w].color=T[T[x].p].color;
                T[T[x].p].color=0;
                T[T[w].right].color=0;
                LeftRotate(T[x].p);
                x=root;
            }
        }
        else
        {
            w=T[T[x].p].left;
            if(T[w].color==1)
            {
                T[w].color=0;
                T[T[x].p].color=1;
                LeftRotate(T[x].p);
                w=T[T[x].p].left;
            }
            if(T[T[w].right].color==0&&T[T[w].left].color==0)
            {
                T[w].color=1;
                x=T[x].p;
            }
            else
            {
                if(T[T[w].left].color==0)
                {
                    T[T[w].right].color=0;
                    T[w].color=1;
                    RightRotate(w);
                    w=T[T[x].p].left;
                }
                T[w].color=T[T[x].p].color;
                T[T[x].p].color=0;
                T[T[w].left].color=0;
                LeftRotate(T[x].p);
                x=root;
            }
        }
    }
    T[x].color=0;
}
int TreeMinimum(int x)
{
    while(T[x].left!=0)
    {
        x=T[x].left;
    }
    return x;
}
void Deleted(int z)
{
    int x;
    int y=z;
    int y_color=T[y].color;
    if(T[z].left==0)
    {
        x=T[z].right;
        Transplant(z,T[z].right);
    }
    else if(T[z].right==0)
    {
        x=T[z].left;
        Transplant(z,T[z].left);
    }
    else
    {
        y=TreeMinimum(T[z].right);
        y_color=T[y].color;
        x=T[y].right;
        if(T[y].p==z)
          T[x].p=y;
        else
        {
            Transplant(y,T[y].right);
            T[y].right=T[z].right;
            T[T[y].right].p=y;
        }
        Transplant(z,y);
        T[y].left=T[z].left;
        T[T[y].left].p=y;
        T[y].color=T[z].color;
    }
    if(y_color==0)
     DeleteFixup(x);
}
void PrintT(int r)
{
    if(T[r].left>0)
    PrintT(T[r].left);
    cout<<T[r].key<<" ";
    if(T[r].right>0)
    PrintT(T[r].right);
}
int Search(int r,int v)
{

    if(T[r].key==v)
    {
        cout<<"Found"<<endl;
        return r;
    }
    else if(T[r].right==0&&T[r].left==0)
    cout<<"Not Found"<<endl;
    else if(T[r].key<v)
    return(Search(T[r].right,v));
    else
    return(Search(T[r].left,v));

}

int main(){//This code not complete..............

    int p=1;
    node V={0,0,0,0,0};
        T.push_back(V);

    RI(n);
    LPI(i,n)
    {
        RI(m);
        node n={0,m,0,0,0};
        T.push_back(n);
       int a=T.size()-1;
        InsertToBST(a);
        cout<<"Root= "<<T[root].key<<endl;
        PrintT(root);
    }

    return 0;
}


