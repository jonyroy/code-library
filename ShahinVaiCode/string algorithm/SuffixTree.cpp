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
#define MaxNode 1000005
int Tree[MaxNode][28][2],Tree_age[MaxNode],suffix_link[MaxNode];
int root=0,Remainder,active_point[3];
string str;
void build_Suffix_Tree()
{
    ms1(Tree);
    int i,len=str.size(),new_node,prv_node,curent_age,nxt_node;
    Remainder=0;
    active_point[0]=root;//Active node
    active_point[1]=-1;//Active age
    active_point[2]=0;// Active length
    new_node=1;
    for(i=0;i<len;i++)
    {
        Remainder++;
        prv_node=0;
        while(Remainder>1)
        {
            if(active_point[1]>=0)
            curent_age=Tree[active_point[0]][active_point[1]][0]+active_point[2];
           int flg=0;
            if(active_point[1]==-1&&Tree[active_point[0]][str[i]-'a'][0]!=-1)
            {
                active_point[1]=str[i]-'a';
                flg=1;
            }
            if(flg==1||(active_point[1]>=0&&str[curent_age]==str[i]))
            {
                cout<<i<<" ";
                active_point[2]++;
                nxt_node=Tree[active_point[0]][active_point[1]][1];
                if(nxt_node!=-1&&Tree_age[nxt_node]==active_point[2])
                {
                    cout<<"hello"<<endl;
                    active_point[0]=nxt_node;//Active node
                    active_point[1]=-1;//Active age
                    active_point[2]=0;// Active length
                }
                break;
            }
            else
            {
                active_point[2]++;
                if(active_point[2]==1)
                {
                    Tree[active_point[0]][str[i]-'a'][0]=i;
                    //cout<<str[i]<<endl;
                }
                else
                {
                    if(prv_node>0)
                    {
                       suffix_link[prv_node]=new_node;
                    }
                    Tree[active_point[0]][active_point[1]][1]=new_node;
                    Tree_age[new_node]=active_point[2]+1;
                    Tree[new_node][str[curent_age]-'a'][0]=curent_age;
                    Tree[new_node][str[i]-'a'][0]=i;
                    cout<<str[curent_age]<<" "<<str[i]<<endl;
                    prv_node=new_node;
                    new_node++;
                }

                if(active_point[0]!=root)
                {
                    active_point[0]=suffix_link[active_point[0]];
                }
                else
                {
                    active_point[2]--;
                    active_point[1]=str[Tree[active_point[0]][active_point[1]][0]+1]-'a';
                }
                Remainder--;
            }
        }
        if(Remainder==1)
        {
            if(Tree[root][str[i]-'a'][0]==-1)
            {
                Tree[root][str[i]-'a'][0]=i;
                Remainder=0;
            }
            else
            {
                active_point[0]=root;//Active node
                active_point[1]=str[i]-'a';//Active age
                active_point[2]=1;// Active length
            }
        }
    }
    //cout<<new_node<<endl;
}
int main()
{
    cin>>str;
    build_Suffix_Tree();
    return 0;
}


