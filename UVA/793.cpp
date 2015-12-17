#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <cassert>
#include <ctime>
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
long int parent[30005],counter[30005];
long int findparent(int n)
{
    if(parent[n]==n)
        return n;
    else
        return parent[n]=findparent(parent[n]);
}
int makeunion(long int a,long int b)
{
    a=findparent(a);
    b=findparent(b);
    if(a!=b)
        parent[a]=b;
    return 0;
}
int main()
{
    int test;
    cin>>test;
    char c[100];
    while(test--)
    {
        int n,s=0,u=0,a,b;
        char ch;
        cin>>n;
        getchar();
        for(int i=1;i<=n;i++)
            parent[i]=i;
            ch=getchar();
            while(ch!='\n'&&ch!=EOF)
            {
                gets(c);
                sscanf(c,"%d%d",&a,&b);
            if(ch=='c')
            {
                makeunion(a,b);
            }
            else
            {
               int nn=findparent(a);
               int mm=findparent(b);
               if(nn==mm)
                s++;
               else
                u++;
            }
            ch=getchar();
            }
            cout<<s<<","<<u<<endl;
            if(test)
                cout<<endl;
    }
    return 0;
}
