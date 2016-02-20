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
    int info;
    int l;
    int r;
    int c;
};
vector< node > T;
void genarate_tree(int up)
{
   int a=1,l,r,p;
    while(up/2>=a)
    {
        l=a;
        while(l<up)
        {
            r=l+a*2;
            p=(l+r)/2;
            T[p].l=l;
            T[p].r=r;
            T[p].c=T[l].c+T[r].c+T[p].c;
           // cout<<p<<" "<<T[p].c<<endl;
            l=r+a*2;
        }
       a= a<<1;
    }
}
void deleted(int r,int p)
{

//cout<<r<<endl;
//getchar();
    T[r].c=T[r].c-1;
    if(T[T[r].l].c>=p)
    {
        deleted(T[r].l,p);
    }
    else if((T[T[r].l].c+1)==p&&T[r].info>0)
    {
        printf("%d\n",T[r].info);
        T[r].info=0;
        return ;
    }
    else
    {
        p=p-T[T[r].l].c;
        if(T[r].info>0)
        p=p-1;
        deleted(T[r].r,p);
    }
}
void insert(int r,int p)
{
    if(r==p)
    {
        T[r].c=T[r].c+1;
        return;
    }
    else
    {
        T[r].c=T[r].c+1;
        if(r<p)
        {
            insert(T[r].r,p);
        }
        else
        {
            insert(T[r].l,p);
        }
    }
}
int main(){
    int root,t,i,j,n,q,a;
    char str[5];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("Case %d:\n",i);
        scanf("%d%d",&n,&q);
        T.clear();
        node nd={0,0,0,0};
            T.push_back(nd);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a);
            node nd={a,0,0,1};
            T.push_back(nd);
        }

        int x=1;
        while(x<=(n+q))
        {
           x=x<<1;
            // cout<<x<<endl;
        }
        root=x/2;
        x=x-1;

        for(j=n;j<=x;j++)
        {
            node nd={0,0,0,0};
            T.push_back(nd);
        }
        genarate_tree(x);
        x=1;
        for(j=0;j<q;j++)
        {
            scanf("%s%d",str,&a);
           // cout<<T[root].c<<endl;
            if(str[0]=='c')
            {
                if(T[root].c<a)
                printf("none\n");
                else
                {
                    //cout<<"hello"<<endl;
                    deleted(root,a);
                }
            }
            else
            {
                T[n+x].info=a;
                insert(root,n+x);
                x++;
            }
        }
    }

return 0;
}
