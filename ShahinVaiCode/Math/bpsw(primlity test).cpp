#include<bits/stdc++.h>
using namespace std;

// #defines
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define SZ(x) ((int)(x).size())
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,-1,sizeof(x))
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define f first
#define s second
#ifdef ONLINE_JUDGE
#define FILEIO(x) freopen(#x ".in","r",stdin);freopen(#x ".out","w",stdout);
#define FILEIOS freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define FILEIO(x) ;
#define FILEIOS ;
#endif
#define inf 1001001001
typedef pair<int,int> pii;
typedef long long ll;
typedef unsigned long long ull;
const double eps = 1e-9;
const double pi = acos(-1.0);
const int maxn = (int)1e5 + 10;
const int mod = (int)1e9;
int fastMax(int x, int y) { return (((y-x)>>(32-1))&(x^y))^y; }
int fastMin(int x, int y) { return (((y-x)>>(32-1))&(x^y))^x; }
void Get(int &T)
{
	char C;bool F=0;
	for(;C=getchar(),C<'0'||C>'9';)if(C=='-')F=1;
	for(T=C-'0';C=getchar(),C>='0'&&C<='9';T=T*10+C-'0');
	F&&(T=-T);
}
const int trivial_limit = 50;
 int p [1000];

 int gcd (int a, int b) {
	 return a?  gcd (b% a, a): b;
 }

 int powmod (int a, int b, int m) {
	 int res = 1;
	 while (b)
		 if (b & 1)
			 res = (res * 1ll * a)% m, - b;
		 else
			 a = (a * 1ll * a)% m, b >>= 1;
	 return res;
 }

 bool miller_rabin (int n) {
	 int b = 2;
	 for (int g; (g = gcd (n, b))!= 1; ++b)
		 if (n> g)
			 return false;
	 int p = 0, q = n-1;
	 while ((q & 1) == 0)
		 ++p, q >>= 1;
	 int rem = powmod (b, q, n);
	 if (rem == 1 || rem == n-1)
		 return true;
	 for (int i = 1; i <p; ++ i) {
		 rem = (rem * 1ll * rem)% n;
		 if (rem == n-1) return true;
	 }
	 return false;
 }

 int jacobi (int a, int b)
 {
	 if (a == 0) return 0;
	 if (a == 1) return 1;
	 if (a <0)
		 if ((b & 2) == 0)
			 return jacobi (-a, b);
		 else
			 return - jacobi (-a, b);
	 int a1 = a, e = 0;
	 while ((a1 & 1) == 0)
		 a1 >>= 1, ++ e;
	 int s;
	 if ((e & 1) == 0 || (b & 7) == 1 || (b & 7) == 7)
		 s = 1;
	 else
		 s = -1;
	 if ((b & 3) == 3 && (a1 & 3) == 3)
		 s =-s;
	 if (a1 == 1)
		 return s;
	 return s * jacobi (b% a1, a1);
 }

 bool bpsw (int n) {
	 if ((int) sqrt (n +0.0) * (int) sqrt (n +0.0) == n) return false;
	 int dd = 5;
	 for (; ;) {
		 int g = gcd (n, abs (dd));
		 if (1 <g && g <n) return false;
		 if (jacobi (dd, n) == -1) break;
		 dd = dd <0?  -dd +2:-dd-2;
	 }
	 int p = 1, q = (p * p-dd) / 4;
	 int d = n +1, s = 0;
	 while ((d & 1) == 0)
		 ++ s, d >>= 1;
	 long long u = 1, v = p, u2m = 1, v2m = p, qm = q, qm2 = q * 2, qkd = q;
	 for (int mask = 2; mask <= d; mask <<= 1) {
		 u2m = (u2m * v2m)% n;
		 v2m = (v2m * v2m)% n;
		 while (v2m <qm2) v2m += n;
		 v2m -= qm2;
		 qm = (qm * qm)% n;
		 qm2 = qm * 2;
		 if (d & mask) {
			 long long t1 = (u2m * v)% n, t2 = (v2m * u)% n,
				 t3 = (v2m * v)% n, t4 = (((u2m * u)% n) * dd)% n;
			 u = t1 + t2;
			 if (u & 1) u += n;
			 u = (u >> 1)% n;
			 v = t3 + t4;
			 if (v & 1) v += n;
			 v = (v >> 1)% n;
			 qkd = (qkd * qm)% n;
		 }
	 }
	 if (u == 0 || v == 0) return true;
	 long long qkd2 = qkd * 2;
	 for (int r = 1; r <s; ++ r) {
		 v = (v * v)% n - qkd2;
		 if (v <0) v += n;
		 if (v <0) v += n;
		 if (v>= n) v -= n;
		 if (v>= n) v -= n;
		 if (v == 0) return true;
		 if (r <s-1) {
			 qkd = (qkd * 1ll * qkd)% n;
			 qkd2 = qkd * 2;
		 }
	 }
	 return false;
 }

 bool prime (int n) {// this function must be called to check for simplicity
	 for (int i = 0; i <trivial_limit && p [i] <n; ++ i)
		 if (n% p [i] == 0)
			 return false;
	 if (p [trivial_limit-1] * p [trivial_limit-1]>= n)
		 return true;
	 if (! miller_rabin (n))
		 return false;
	 return bpsw (n);
 }

 void prime_init () {// called before the first call to prime ()!
	 for (int i = 2, j = 0; j <trivial_limit; ++ i) {
		 bool pr = true;
		 for (int k = 2; k * k <= i; ++ k)
			 if (i% k == 0)
				 pr = false;
		 if (pr)
			 p [j ++] = i;
	 }
 }
int main()
{
    int n;
    prime_init ();
    while(cin>>n){
    cout<<prime(n)<<endl;
    }
    return 0;
}


