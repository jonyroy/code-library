/*
* Author: Jony Roy
* Date: 14-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
#define PI 3.1415926535897932384
#define EulerConstant  0.57721566490153286060651209008240243104215933593992
#define CountBit(a)  __builtin_popcount(a)
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
    int TestCase;
    scanf("%d",&TestCase);
    for(int i=1;i<=TestCase;i++)
    {
        llint sum=0;
        int n;
        scanf("%d",&n);
        int sq=sqrt(n);
        int rem=(sq*(sq+1))/2;
        for(int i=2;i<=sq;i++)
        {
            llint b=n/i;
            sum+=(i*b-i);
            b=(b*(b+1))/2;
            //if(b-rem>0)
            sum+=(b-rem);
        }
        printf("Case %d: %lld\n",i,sum);
    }
    return 0;
}

