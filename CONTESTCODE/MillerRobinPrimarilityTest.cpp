/*
* Author: Jony Roy
* Date: 21-02-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
#define ft              first
#define sd              second
using namespace std;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;

llint BigMod(llint a,llint b,llint MOD)
{
    if(b==0)
    return 1;
    llint x=BigMod(a,b/2,MOD);
    x=(x*x)%MOD;
    if(b%2)
    x=(x*a)%MOD;
    return x;
}

 bool miller_rabin (int n) 
 {
	 int b = 2;
	 for (int g;(g = gcd (n, b))!= 1; ++b)
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

int main(int argc, char const *argv[])
{
    int k=-25;
    k=k%4;
    k=(k+4)%4;
    cout<<k<<endl;
    return 0;
}