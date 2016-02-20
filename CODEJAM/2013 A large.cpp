#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <utility>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstring>
#include <cassert>
#include <ctime>
#include <stdbool.h>
using namespace std;

#define pb  push_back
#define pob pop_back
#define mp  make_pair
#define EPS  (1E-9)
#define sqr(x)  ((x) * (x))
#define For(i,k,r)  for(int i = k; i <= r; i++)
#define Fill(a,b)   memset(a,b,sizeof(a))
#define OR ||
#define AND &&
#define P printf
#define S scanf
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;

const int N = 200000;
int n, m, k;
long long a[N];
int l[N], r[N], d[N];
long long open[N], close[N];
long long add[N], sub[N];

char sq[10][10];
int c[200];
int row()
{
      for(int j=0;j<4;j++)
         {
             for(int i=0;i<=130;i++)
                c[i]=0;
             for(int k=0;k<4;k++)
             {
                    c[sq[j][k]]++;
             }
             if(c['X']==4||(c['X']==3&&c['T']==1))
             {
                 return 1;
             }
              if(c['O']==4||(c['O']==3&&c['T']==1))
             {
                 return 2;
             }
         }
         return 0;
}
int column()
{
    for(int j=0;j<4;j++)
         {
             for(int i=0;i<=130;i++)
                c[i]=0;
             for(int k=0;k<4;k++)
             {
                    c[sq[k][j]]++;
             }
             if(c['X']==4||(c['X']==3&&c['T']==1))
             {
                 return 1;
             }
             if(c['O']==4||(c['O']==3&&c['T']==1))
             {
                 return 2;
             }
         }
    return 0;
}
int digo1()
{
         for(int i=0;i<=130;i++)
         c[i]=0;
         for(int l=0;l<4;l++)
         {
             c[sq[l][l]]++;
         }
         if(c['X']==4||(c['X']==3&&c['T']==1))
         {
              return 1;
         }
         if(c['O']==4||(c['O']==3&&c['T']==1))
         {
           return 2;
         }
    return 0;
}
int digo2()
{
         for(int i=0;i<=130;i++)
         c[i]=0;
         int p=3;
         for(int l=0;l<4;l++)
         {
             c[sq[p--][l]]++;
         }
         if(c['X']==4||(c['X']==3&&c['T']==1))
         {
              return 1;
         }
         if(c['O']==4||(c['O']==3&&c['T']==1))
         {
           return 2;
         }
    return 0;
}
int main()
{
    int n,i,j,k,l,t,r;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    for(t=1;t<=n;t++)
    {
        for(i=0;i<4;i++)
        cin>>sq[i];
        r=row();
        if(r==1)
        {
            printf("Case #%d: X won\n",t);
            continue;
        }
        else if(r==2)
        {
            printf("Case #%d: O won\n",t);
            continue;
        }
        r=column();
        if(r==1)
        {
            printf("Case #%d: X won\n",t);
            continue;
        }
        else if(r==2)
        {
            printf("Case #%d: O won\n",t);
            continue;
        }
        r=digo1();
        if(r==1)
        {
            printf("Case #%d: X won\n",t);
            continue;
        }
        else if(r==2)
        {
            printf("Case #%d: O won\n",t);
            continue;
        }
        r=digo2();
        if(r==1)
        {
            printf("Case #%d: X won\n",t);
            continue;
        }
        else if(r==2)
        {
            printf("Case #%d: O won\n",t);
            continue;
        }
         for(int i=0;i<=130;i++)
         c[i]=0;
          for(int i=0;i<4;i++)
             {
                 for(int j=0;j<4;j++)
                    c[sq[i][j]]++;
             }
             if(c['.']>0)
                printf("Case #%d: Game has not completed\n",t);
             else
                printf("Case #%d: Draw\n",t);
    }
    return 0;
}
