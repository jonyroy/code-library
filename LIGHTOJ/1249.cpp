/*
* Author: Jony Roy
* Date: 27-02-2016
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

int main(int argc, char const *argv[])
{
    int TestCase;
    scanf("%d",&TestCase);
    for (int i = 1; i <= TestCase; ++i)
    {
       int n;
       cin>>n;
       string s,x,y;
      int minimum=10000000,maximum=-1;
      for(int j=1;j<=n;j++)
      {
       int a,b,c;
       cin>>s>>a>>b>>c;
       int d=a*b*c;
       if(d<minimum)
       {
       	x=s;
       	minimum=d;
       }
       if(maximum<d)
       {
       	y=s;
       	maximum=d;
       }
       //cout<<x<<" minimum = "<<d<<" "<<y<<" maximum = "<<maximum<<endl;
      }
      if(x==y)
      {
      	printf("Case %d: no thief\n", i);
      }
      else
      	cout<<"Case "<<i<<": "<<y<<" took chocolate from "<<x<<endl;
    }
    return 0;
}
