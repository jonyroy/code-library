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
     int main()
     {
         int n,m=1,a[150][1100];
         cin>>n;
         for(int i=1;i<=n/2;i++)
         {
             for(int j=1;j<=n;j++){
                a[i][j]=m;
                m++;
             }
         }
         m=n*n;
         for(int i=n/2+1;i<=n;i++)
         {
             for(int j=1;j<=n;j++)
            {
                a[i][j]=m;
                m--;
             }
         }
         for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
            {
                  cout<<a[j][i]<<" ";
            }
            cout<<endl;
         }
         return 0;
     }
