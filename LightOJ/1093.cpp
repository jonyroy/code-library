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
    #define EPS (1E-9)
    #define sqr(x) ((x) * (x))
    #define pb(x) push_back(x)
    #define pob(x) pop_back(x)
    #define mp(x) make_pair(x)
    #define PI 3.141592653589793
    #define Fill(a,b) memset(a,b,sizeof(a))
    #define FOR(i,k,n) for(int i = k; i <= n; i++)
    #define rep(i,k,n) for(int i=n;i>=k;i--)
    typedef int I;
    typedef long L;
    typedef float FL;
    typedef double D;
    typedef long long LL;
    typedef vector<int>VI;
    typedef pair<int,int> PII;
    typedef long double LD;
    typedef vector<long int>VL;
    typedef unsigned long long ULL;
    long int status[100010];
    int main()
    {
        int T;
        long m;
        set<long>v;
        set<long>::iterator it;
        scanf("%d",&T);
        for(int j=1;j<=T;j++)
        {
            m=-5;
            long int n,d,l=1;
            scanf("%ld%ld",&n,&d);
            for(int i=1;i<=n;i++)
            {
                scanf("%ld",&status[i]);
                if(i>=d)
                {
                    if(l<=n-d+1){
                     v.insert(status+l,status+d+l);
                     it=v.begin();
                     long a= *it;
                     it=v.end();
                     it--;
                     long b=*it;
                     long c=b-a;
                     m=max(m,c);
                     v.clear();
                     l++;
                    }
                }
            }
            /*for(int i=1;i<=n-d+1;i++)
            {
                     v.insert(status+i,status+i+d);
                     it=v.begin();
                     long a= *it;
                     it=v.end();
                     it--;
                     long b=*it;
                     long c=b-a;
                     m=max(m,c);
                     v.clear();
            }*/
           printf("Case %d: %ld\n",j,m);
        }
        return 0;
    }

