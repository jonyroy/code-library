/*
* Author: Jony Roy
* Date: 29-02-2016
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
    map<string,int>m;
    m["January"]=1;
    m["February"]=2;
    m["March"]=3;
    m["April"]=4;
    m["May"]=5;
    m["June"]=6;
    m["July"]=7;
    m["August"]=8;
    m["September"]=9;
    m["October"]=10;
    m["November"]=11;
    m["December"]=12;
    for (int i = 1; i <= TestCase; ++i)
    {
       string a,b;
       int n;
       cin>>a>>b>>n;
       int x=(n)/4-(n)/100+(n)/400;
       int ll=b.size()-1;
       b[ll]='\0';
       int ss=m[a];
       int y=atoi(b.c_str());
       if((ss==2 && y<=29 || ss==1) && ((n%4==0 && n%100 )|| n%400==0))
       {
             x--;
       }
       cin>>a>>b>>n;
       int l=b.size()-1;
       b[l]='\0';
       int xx=(n)/4-(n)/100+(n)/400;
       y=atoi(b.c_str());
       ss=m[a];
       if((ss==2 && y<=28 || ss==1 ) && ((n%4==0 && n%100 )|| n%400==0))
       {
             xx--;
       }
       printf("Case %d: %d\n",i,xx-x);
    }
    return 0;
}
