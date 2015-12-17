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
     int main()
     {
         int r,c,sum=0;
         char s[100][100];
         cin>>r>>c;
         getchar();
         for(int i=0;i<r;i++)
               cin>>s[i];
               for(int i=0;i<r;i++)
               {
                   int coun=0,t=0;
                   for(int j=0;j<c;j++)
                    {
                     if(s[i][j]=='S')
                        {
                            t=1;
                     continue;
                        }
                     if(s[i][j]=='0')
                        coun++;
                   }
                   if(t==0)
                    {
                    sum=sum+c-coun;
                   for(int j=0;j<c;j++)
                    s[i][j]='0';
                    }
               }
               for(int i=0;i<c;i++)
               {
                   int coun=0,t=0;
                   for(int j=0;j<r;j++)
                    {
                     if(s[j][i]=='S')
                        {
                            t=1;
                     continue;
                        }
                     if(s[j][i]=='0')
                        coun++;
                   }
                   if(t==0)
                    {
                    sum=sum+r-coun;
                   for(int j=0;j<r;j++)
                    s[j][i]='0';
                    }
               }
               cout<<sum<<endl;
         return 0;
     }
