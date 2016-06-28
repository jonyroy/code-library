/*
* Author: Jony Roy
* Date: 17-06-2016
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
typedef double                   ddd;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;

double fact[10000005];
int main(int argc, char *argv[])
{


   fact[0]=0.0;
   for(int i=1;i<=10000000;i++)
   {
      fact[i]=fact[i-1]+log10(i);
   }
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       int m;
       scanf("%d",&m);
       int b=(int)(fact[m]+1);
       printf("%d\n",b);
   }
   return 0;
}

