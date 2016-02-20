#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
int main()
{
    double n,m,a,b,c,cnt,knt,d;
    long int t;
    scanf("%ld",&t);
    for(long int i=1;i<=t;i++)
    {
    scanf("%lf%lf",&n,&m);
    a=sqrt(m+(n*n));
    m=sqrt(m);
    b=(n*m)/2.0;
    c=asin((b*2.0)/(a*m));
    c=PI-c;
    c=PI-c;
    d=(1.0/sin(c))*m;
    cnt=sqrt(d*d+a*a);
    knt=(2.0*a*a+2.0*d*d-cnt*cnt)/4.0;
    knt=sqrt(knt);
    printf("Case %ld: %0.6lf\n",i,knt);
    }
    return 0;
}
