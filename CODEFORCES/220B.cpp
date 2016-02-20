    #include<set>
    #include<list>
    #include<map>
    #include<stack>
    #include<bitset>
    #include<ctime>
    #include<string>
    #include<conio.h>
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
    #define MAX 100050
    #define EPS (1E-9)
    #define sqr(x) ((x) * (x))
    #define scd(n) scanf("%d",&n);
    #define scld(n) scanf("%ld",&n);
    #define scld2(n,m) scanf("%ld%ld",&n,&m);
    #define sclld(n) scanf("%lld",&n);
    #define pb(x) push_back(x)
    #define pob(x) pop_back(x)
    #define mp(x) make_pair(x)
    #define PI 3.141592653589793
    #define fill(a,b) memset(a,b,sizeof(a))
    #define for1(i,n) for(int i=1;i<=n;i++)
    #define for0(i,n) for(int i=0;i<n; i++)
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
    L a[MAX],cs[MAX],store[500],k,st[455][100005];
     int main()
     {
         long n,q,l,r,coun,m;
         scanf("%ld%ld",&n,&q);
         for(int i=1;i<=n;i++)
            scanf("%ld",&a[i]);
         for(int i=1;i<=n;i++)
         {
             if(a[i]<=n)
                cs[a[i]]++;
         }
         for(int i=1;i<=n;i++)
            if(cs[i]>=i)
             {
             store[++k]=i;
             }
             for(int i=1;i<=k;i++)
             {
                 m=store[i];
                 for(int j=1;j<=n;j++)
                 {
                     if(m==a[j])
                        st[i][j]=st[i][j-1]+1;
                     else
                        st[i][j]=st[i][j-1];
                 }
             }
             for(int i=1;i<=q;i++)
             {
                 scanf("%ld%ld",&l,&r);
                 coun=0;
                 for(int j=1;j<=k;j++)
                 {
                     if(st[j][r]-st[j][l-1]==store[j])
                        coun++;
                 }
                 printf("%ld\n",coun);
             }
         return 0;
     }
