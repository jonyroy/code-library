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
    long int N=100050,status[100050];
    long int store[10000];
    long int s[100050];
    int prime()
    {
    long int i,j,sqrtN;
    long int count=1;
    store[count++]=2;
    sqrtN=(int)(sqrt((double)N));
    for(i=3;i<=sqrtN;i+=2)
    {
    if(status[i]==0)
    {
    store[count++]=i;
    for(j=i*i;j<=N;j+=i+i)
    status[j]=1;
    }
    }
    if(sqrtN%2==0)
    sqrtN++;
    for(i=sqrtN;i<=100000;i+=2)
    {
    if(status[i]==0)
    store[count++]=i;
    }
    for(long int i=2;i<=100000;i++)
    {
    long int count=0;
    long int j=1;
    long int m=i;
    while(m!=1)
    {
    int flag=0;
    while(m%store[j]==0)
    {
    m=m/store[j];
    flag=1;
    }
    if(flag==1)
    count++;
    j++;
    }
    s[i]=count;
    }
    return 0;
    }
    int main()
    {
        prime();
        freopen("jony.txt","w",stdout);
    for(int i=2;i<=100000;i++)
        cout<<s[i]<<endl;
    return 0;
    }

