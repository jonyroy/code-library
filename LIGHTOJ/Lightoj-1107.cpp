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

int main(int argc, char const *argv[])
{
    int TestCase;
    scanf("%d",&TestCase);
    for (int i = 1; i <= TestCase; ++i)
    {
       int x,y,x1,y1;
       scanf("%d%d%d%d",&x,&y,&x1,&y1);
       int m;
       scanf("%d",&m);
       printf("Case %d:\n", i);
       for (int j=1;j<=m;++j)
          {
              int a,b;
              scanf("%d%d",&a,&b);
              if(a>x&&a<x1 && b>y&&b<y1)
              printf("Yes\n");
              else
              printf("No\n");
          }   
    }
    return 0;
}