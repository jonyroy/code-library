    #include<set>
    #include<list>
    #include<map>
    #include<stack>
    #include<bitset>
    #include<ctime>
    #include<string>
    #include<deque>
    #include<queue>
    #include<cstdio>
    #include<cmath>
    #include<utility>
    #include<vector>
    #include<cstdlib>
    #include<cstring>
    #include<cstring>
    #include<cassert>
    #include<fstream>
    #include<sstream>
    #include<complex>
    #include<iostream>
    #include<stdbool.h>
    #include<algorithm>
    #include<functional>
    using namespace std;
    #define F first
    #define S second
    #define MAX 1000500
    #define EPS  (1E-9)
    #define sqr(x)  ((x) * (x))
    #define pb(x)  push_back(x)
    #define pob(x)  pop_back(x)
    #define mp(x)  make_pair(x)
    #define PI 3.141592653589793
    #define Fill(a,b)   memset(a,b,sizeof(a))
    #define FOR(i,k,n)  for(int i = k; i <= n; i++)
    #define rep(i,k,n)   for(int i=n;i>=k;i--)
    typedef int  I;
    typedef long  L;
    typedef float  FL;
    typedef double  D;
    typedef long long LL;
    typedef vector<int>VI;
    typedef pair<int,int> PII;
    typedef long double  LD;
    typedef vector<long int>VL;
    typedef unsigned long long ULL;
    struct node
    {
        char v;
        int r;
        int c;
        bool eow;
    };
    vector<node>tree;
    int insert_word(char str[])
    {
        int i,j,s,n;
        int l=strlen(str);
        j=0;s=0;i=0;
        for(i=0;i<l;i++)
        {
            j=1;
            while(1)
            {
                if(tree[s].v==str[i])
                {
                    if(tree[s].eow==1||i==l-1)
                        {
                         return 1;
                        }
                    if(tree[s].r>0)
                    {
                        s=tree[s].r;
                        j=0;
                    }
                    else
                    {
                        n=tree.size();
                        for(i=i+1;i<l;i++)
                        {
                            tree[s].r=n;
                            node temp={str[i],0,0,0};
                            tree.push_back(temp);
                            s=n;
                            n++;
                        }
                        tree[s].eow=1;
                    }
                    break;
                }
                else if(tree[s].c>0)
                {
                    s=tree[s].c;
                }
                else
                {
                    n=tree.size();
                    tree[s].c=n;
                    node temp={str[i],0,0,0};
                    tree.push_back(temp);
                    s=n;n++;
                    for(i=i+1;i<l;i++)
                    {
                        tree[s].r=n;
                        node temp={str[i],0,0,0};
                        tree.push_back(temp);
                        s=n;
                        n++;
                    }
                    tree[s].eow=1;
                    break;
                }
            }
            if(j==1)
            break;
        }
        return 0;
    }
    int main()
    {
        int T,n;
        bool te;
        char str[10050][15];
        scanf("%d",&T);
        for(int i=1;i<=T;i++)
        {
            tree.clear();
            node ss={'a',0,0,0};
            tree.push_back(ss);
            te=false;
            scanf("%d",&n);
            for(int j=1;j<=n;j++)
             scanf("%s",str[j]);
             if(n==1)
             {
                 printf("Case %d: NO\n",i);
                 continue;

             }
             for(int j=1;j<=n;j++)
             {
                 int test=insert_word(str[j]);
                 if(test==1)
                 {
                     te=true;
                     break;
                 }
             }
             if(te==true)
             printf("Case %d: NO\n",i);
             else
             printf("Case %d: YES\n",i);
        }
        return 0;
    }
