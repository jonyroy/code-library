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
           Tree[r].Info = Minmum(pr,Tree[r].R);
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

    int p=1,n,x,d,m,v,i;
    node V={0,1,0};
        Tree.push_back(V);
    cin>>n>>x;
    node V1={x,0,0};
        Tree.push_back(V1);
    for(i=0;i<n;i++)
    {
        cin>>m;
        insert(Tree[0].L,m);
        cout<<"Insertion succesfully"<<endl;
        PrintTree(Tree[0].L);
    }
    cout<<"Enter value for Search. ";
    cin>>v;
    Search(Tree[0].L,v);
    cout<<"Enter value for Delete. ";
    cin>>d;
    DeleteNode(Tree[0].L,d,0,0);
    PrintTree(Tree[0].L);
    return 0;
}


