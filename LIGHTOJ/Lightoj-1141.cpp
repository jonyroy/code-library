/*
* Author: Jony Roy
* Date: 26-06-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
#define ft              first
#define sd              second
using namespace std;
typedef double                   ddd;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;

llint bigMod(llint a,llint b,llint MOD)
{
    if(b==0)
        return 1;
    llint temp=bigMod(a,b>>1,MOD);
    temp=(temp*temp)%MOD;
    if(b&1)
        temp= (a*temp)%MOD;
    return temp;
}

int visited[1005],dist[1005];
vector<int> pFactor[1005];
int primeFactor()
{
    for(int i=4; i<=1000; i++)
    {
        int m=i;
        for(int j=2; j<=sqrt(m); j++)
        {
            bool flag=false;
            while(m%j==0)
            {
                m/=j;
                flag=true;
            }
            if(flag)
                pFactor[i].push_back(j);
        }
        if(m>1&&m<i)
            pFactor[i].push_back(m);
    }
}
int breadthFirstSearch(int source,int destination)
{
    for(int i=0; i<=1000; i++)
        visited[i]=0,dist[i]=0;
    queue<int> Q;
    dist[source]=0;
    Q.push(source);
    visited[source]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0; i<pFactor[u].size(); i++)
        {
            int v=u+pFactor[u][i];
            if(v<=destination && visited[v]==0)
            {
                dist[v]=dist[u]+1;
                visited[v]=1;
                Q.push(v);
            }
        }
    }
}
int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    int tc;
    primeFactor();
    scanf("%d",&tc);
    for(int i=1; i<=tc; i++)
    {
        scanf("%d%d",&n,&m);
        breadthFirstSearch(n,m);
        if(visited[m])
            printf("Case %d: %d\n",i,dist[m]);
        else
            printf("Case %d: -1\n",i);
    }
    return 0;
}

