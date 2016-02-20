#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define EPS  (1E-9)
#define sqr(x)  ((x) * (x))
#define pb(x)  push_back(x)
#define pob(x)  pop_back(x)
#define mp(x)  make_pair(x)
#define PI 3.141592653589793
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
class Archery {
	public:
	double expectedPoints(int N, vector <int> ringPoints) {
	    double sum=0.0;
		for(int i=1;i<=N+1;i++)
            sum+=(((double)(2*i+1)/(double)((N+1)*(N+1)))*ringPoints[i-1]);
        return sum;
	}
};
