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
        int n,arr[3*100000];
        vector<int>v;
        long long m=-1000000000000000,sum;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n;i++)
        {
            sum=0;
            for(int j=n;j>i;j--)
            {
                if(arr[i]==arr[j])
                {
                          for(int k=i+1;k<j;k++)
                          {
                              if(arr[k]>0)
                                sum=sum+arr[k];
                          }
                          sum=sum+arr[i]+arr[j];
                          if(sum>=m)
                          {
                              v.clear();
                              m=sum;
                              for(int u=1;u<i;u++)
                              v.push_back(u);
                              for(int k=i+1;k<j;k++)
                              {
                                  if(arr[k]<=0)
                                    v.push_back(k);
                              }
                              for(int u=j+1;u<=n;u++)
                                v.push_back(u);
                          }
                          break;
                }
            }
        }
        int b=v.size();
        cout<<m<<" "<<b<<endl;
        for(int i=0;i<b;i++)
            cout<<v[i]<<" ";
        cout<<endl;
        return 0;
    }

