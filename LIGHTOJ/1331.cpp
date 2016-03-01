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
       double r1,r2,r3;
       cin>>r1>>r2>>r3;
       double a,b,c,aa,cc,bb;
       c=r1+r2;
       a=r2+r3;
       b=r1+r3;
       double s=(a+b+c)/2.;
       s=sqrt(s*(s-a)*(s-b)*(s-c));
       //cout<<s<<endl;
       aa=a*a;
       bb=b*b;
       cc=c*c;
       double an,bn,cn;
       an=acos((bb+cc-aa)/(2.*b*c));
       bn=acos((cc+aa-bb)/(2.*c*a));
       cn=acos((aa+bb-cc)/(2.*a*b));
       //cout<<an<<" "<<bn<<" "<<cn<<endl;
       s=s-(r1*r1*an)/2.;
       s=s-(r2*r2*bn)/2.;
       s=s-(r3*r3*cn)/2.;
       printf("Case %d: %.10lf\n",i,s);
    }
    return 0;
}
