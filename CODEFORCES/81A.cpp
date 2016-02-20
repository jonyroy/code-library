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
         string s;
         cin>>s;
         stack<char>a;
         char ch;
         L len=s.size();
         for(L i=len-1;i>=0;i--)
         {
             if(a.size()==0)
                a.push(s[i]);
                else if(a.top()==s[i])
                a.pop();
             else
                a.push(s[i]);
         }
         while(!a.empty())
         {
             cout<<a.top();
             a.pop();
         }
         /*vector<char>ch;
         L len=s.size();
         ch.push_back(s[0]);
         for(L i=1;i<len;i++)
         {
             L k=ch.size();
             if(k==0)
                ch.push_back(s[i]);
             else if(ch[k-1]==s[i])
                ch.pop_back();
             else
                ch.push_back(s[i]);

         }
         for(L i=0;i<ch.size();i++)
            cout<<ch[i];*/
         cout<<endl;
        return 0;
    }
