#include<bits/stdc++.h>
using namespace std;

// #defines
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define sz(x) ((int)(x).size())
#define ms0(x) memset(x,0,sizeof(x))
#define ms1(x) memset(x,-1,sizeof(x))
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define f first
#define s second
#define mp make_pair
#define pb push_back
#ifdef ONLINE_JUDGE
#define FILEIO(x) freopen(#x ".in","r",stdin);freopen(#x ".out","w",stdout);
#define FILEIOS freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define FILEIO(x) ;
#define FILEIOS ;
#endif
#define inf 1001001001
typedef pair<int,int> pii;
typedef long long ll;
typedef unsigned long long ull;
const double eps = 1e-9;
const double pi = acos(-1.0);
const int maxn = (int)1e5 + 10;
const int mod = (int)1e9;
int fastMax(int x, int y) { return (((y-x)>>(32-1))&(x^y))^y; }
int fastMin(int x, int y) { return (((y-x)>>(32-1))&(x^y))^x; }
#define Max_node 100005
vector<int>Tree_link[Max_node],Tree_eow[Max_node];
vector<char>Tree[Max_node];
int nxt_node=1,root=0;
void build_Tri_Tree(string str)
{
     int node=root,prv,flg=-1,i,j,n=str.size();
     for(i=0;i<n&&node>=0;i++)
     {
        prv=node;flg=-1;
        for(j=0;j<Tree[node].size();j++)
        {
           if(Tree[node][j]==str[i])
           {
            node=Tree_link[node][j];
            flg=j;
            break;
           }
        }
        if(flg<0)
        break;
     }
    node=prv;
    if(flg>=0&&i<n)
    {
        Tree_link[node][flg]=nxt_node;
        node=nxt_node;
        nxt_node++;
    }
    for(;i<n;i++)
    {
        prv=node;
        Tree[node].pb(str[i]);
        Tree_eow[node].pb(0);
        flg=Tree[node].size()-1;
        if(i<n-1)
        {
            Tree_link[node].pb(nxt_node);
            node=nxt_node;
            nxt_node++;
        }
        else
        Tree_link[node].pb(-1);
    }
    Tree_eow[prv][flg]++;
    //cout<<Tree_eow[prv][flg]<<" "<<prv<<" "<<flg<<endl;
}
int search_Tri_Tree(string str)
{
    int node=root,cnt=0,i,j,n=str.size(),flg=1;
     for(i=0;i<n&&node>=0&&flg>0;i++)
     {
         flg=0;
        for(j=0;j<Tree[node].size();j++)
        if(Tree[node][j]==str[i])
        {

            flg=1;
            cnt=cnt+Tree_eow[node][j];
            if(i==n-1)
            return Tree_eow[node][j];
           // cout<<Tree_eow[node][j]<<" "<<node<<endl;
            node=Tree_link[node][j];
            break;
        }
     }
     return 0;//cnt;
}
int main()
{
    string str;
    int n,m,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str;
        build_Tri_Tree(str);
    }
    i=0;
    while(i<=5)
    {
        cout<<"Enter the search string: ";
        cin>>str;
        cout<<search_Tri_Tree(str)<<endl;
        i++;
    }
    return 0;
}


