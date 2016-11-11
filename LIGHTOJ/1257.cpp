/*
* Author: Jony Roy
* Date: 22-06-2016
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


/*The Debugger Template used Here is written by Bidhan Roy*/

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p )
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v )
{
    os << "{";
    typename vector< T > :: const_iterator it;
    for( it = v.begin(); it != v.end(); it++ )
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v )
{
    os << "[";
    typename set< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ )
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v )
{
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ )
    {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}
#define deb(x) cerr << #x << " = " << x << endl;
/*..........................................................................*/

//int fx[]={0,-1,0,1};
//int fy[]={-1,0,1,0};

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

vector<int> adj[30005],weight[30005];
int bfs(int start,int dist[])
{
    bitset<30005> visited;
    queue<int> q;
    q.push(start);
    visited[start]=true;
    dist[start]=0;
    int cost=0;
    int node=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(!visited[v])
            {
                visited[v]=true;
                dist[v]=dist[u]+weight[u][i];
                if(cost<dist[v])
                {
                    cost=dist[v];
                    node=v;
                }
                q.push(v);
            }
        }
    }
    return node;
}
int main(int argc, char *argv[])
{
   int tc;
   scanf("%d",&tc);
   for(int i=1;i<=tc;i++)
   {
       printf("Case %d:\n",i);
       int n;
       scanf("%d",&n);

       for(int j=0;j<n-1;j++)
       {
           int u,v,w;
           scanf("%d%d%d",&u,&v,&w);
           adj[u].push_back(v);
           adj[v].push_back(u);
           weight[u].push_back(w);
           weight[v].push_back(w);
       }

       int node,cost,dist[30005]={0},distanc[30005]={0};
       int ln=bfs(0,dist);
       int rn=bfs(ln,dist);
       bfs(rn,distanc);
       for(int j=0;j<n;j++)
       {
           int cmp=dist[ln]-dist[j];
           if(cmp<0)
            cmp=-cmp;
           int kmp=distanc[rn]-distanc[j];
           if(kmp<0)
            kmp=-kmp;
           cmp=max(kmp,cmp);
           printf("%d\n",cmp);
       }
      for(int j=0;j<=n;j++)
       {
           adj[j].clear();
           weight[j].clear();
       }
   }
   return 0;
}

