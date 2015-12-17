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
    long int N=100050,status[100050]={1,1,1,1};
    long int store[10000];
    long int s[100050];
    int main()
    {
    long int a,b,k,N,T,l,i;
    for(i=4;i<=100000;i++)
    {
    int p=1;
    l=2;
    N=i;
    long int coun=0;
    while(l<=(long)sqrt(i))
    {
    int flag=0;
    while(N%l==0)
    {
    N=N/l;
    flag=1;
    }
    if(flag==1)
    coun++;
    if(p>1)
    l+=2;
    else
    l++;
    p++;
    }
    if(N>1)
    coun++;
    status[i]=coun;
    }
    long int c;
    scanf("%ld",&T);
    for(long int j=1;j<=T;j++)
    {
    c=0;
    scanf("%ld%ld%ld",&a,&b,&k);
    for(i=a;i<=b;i++)
    {
    if(status[i]==k)
    c++;
    }
    printf("%ld\n",c);
    }
    return 0;
    }
