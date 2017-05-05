/*
* Author: Jony Roy
* Date: 26-02-2016
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
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       printf("Case %d: ", i);
       if(abs(a-c)==abs(b-d))
       printf("1\n");
       else if((abs(a-c))%2==0 && (abs(b-d))%2==0)
       printf("2\n");
       else if((abs(a-c))%2==1 && (abs(b-d))%2==1)
       printf("2\n");
       else
       printf("impossible\n");
    }
    return 0;
}