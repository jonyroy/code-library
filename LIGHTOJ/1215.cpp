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
    int n;
    int a,b;
    llint L;
    int TestCase;
    scanf("%d",&TestCase);
    for(int i=1;i<=TestCase;i++)
    {
        scanf("%d%d%lld",&a,&b,&L);
        printf("Case %d: ",i);
        llint x=(llint)a*b;
        int y=x/(__gcd(a,b));
        if(L%y)
        printf("impossible\n");
        else
        {
            llint m=L/y;
            for(int j=1;m*j<=1000000000000;j++)
            {
               int c=m*j;
               n=m*__gcd(c,y);
               if(c==n)
               {
                   printf("%d\n",c);
                   break;
               }
            }
        }
    }
    return 0;
}

