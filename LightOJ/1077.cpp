/*
* Author: Jony Roy
* Date: 10-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
#define PI 3.1415926535897932384
#define p_b(x) push_back(x)
#define m_p(x) make_pair(x)
#define ft first
#define sd second
using namespace std;
typedef long long int llint;
typedef unsigned long long int ullint;
typedef long int lint;
typedef unsigned int uint;
typedef unsigned long int ulint;
typedef pair<int,int> pint;
typedef pair<lint,lint> plint;
typedef pair<llint,llint> pllint;

int main()
{
    llint ax,ay,bx,by;
    int TestCase;
    scanf("%d",&TestCase);
    for(int i=1; i<=TestCase; i++)
    {
        scanf("%lld%lld%lld%lld",&ax,&ay,&bx,&by);
        printf("Case %d:",i);
        llint a=by-ay;
        llint b=bx-ax;
        if(a<0)
            a=-a;
        if(b<0)
            b=-b;
        if(a==0)
        {
            printf(" %lld\n",b+1);
            continue;
        }
        if(b==0)
        {
            printf(" %lld\n",a+1);
            continue;
        }
        llint c=__gcd(a,b);
        llint k=a/c;
        llint kk=b/c;
        a=a/k;
        b=b/kk;
        c=min(a,b)+1;
        printf(" %lld\n",c);

    }
    return 0;
}

