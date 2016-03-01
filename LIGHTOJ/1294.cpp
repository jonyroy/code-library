/*
* Author: Jony Roy
* Date: 25-02-2016
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

int main(int argc, char const *argv[])
{
    int TestCase;
    scanf("%d",&TestCase);
    for (int i = 1; i <= TestCase; ++i)
    {
       llint m,n,ans;
       scanf("%lld%lld",&n,&m);
       ans=m*m;
       n=(n)/(m<<1);
       ans*=n;
       printf("Case %d: %lld\n",i,ans );	
    }
    return 0;
}