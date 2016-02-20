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
#define EPS  (1E-9)
#define MAX 100
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
class BiggestRectangleEasy {
	public:
	int findArea(int N) {
		if(N%2)
            N--;
        int a=N/2;
        if(a%2)
        {
            a--;
            a=a/2;
            int b=N/2+1;
            b=b/2;
            return a*b;
        }
        return (a/2)*(a/2);
	}
};


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
