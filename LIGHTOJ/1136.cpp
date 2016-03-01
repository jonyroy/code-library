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
int a,b,TestCase,c,d;
int main(int argc, char const *argv[])
{
    scanf("%d",&TestCase);
    for (int i = 1; i <= TestCase; ++i)
    {
       
       scanf("%d%d",&a,&b);
       c=((a-1)/3)<<1;
       if((a-1)%3==2)
       	c++;
       d=(b/3)<<1;
       if(b%3==2)
       	d++;
       d=d-c;
       printf("Case %d: %d\n",i,d);
    }
    return 0;
}