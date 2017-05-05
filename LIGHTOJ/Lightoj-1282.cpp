/*
* Author: Jony Roy
* Date: 15-02-2016
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
int BigMod(int a,int b,int MOD)
{
    if(b==0)
    return 1;
    llint x=BigMod(a,b/2,MOD);
    x=(x*x)%MOD;
    if(b%2)
    x=(x*a)%MOD;
    return (int)x;
}
int main()
{
    int n,m;
    int TestCase;
    scanf("%d",&TestCase);
    for(int i=1;i<=TestCase;i++)
    {
        scanf("%d%d",&n,&m);
        double a=m*1.*log10(n);
        llint b=(llint)a;
        a=a-b*1.;
        double c=pow(10,a)*100;
        int lastDigits=BigMod(n,m,1000);
        int firstDigits=(int)c;
        if(lastDigits<10)
        {
            printf("Case %d: %d 00%d\n",i,firstDigits,lastDigits);
        }
        else if(lastDigits<100)
        printf("Case %d: %d 0%d\n",i,firstDigits,lastDigits);
        else
        printf("Case %d: %d %d\n",i,firstDigits,lastDigits);
    }
    return 0;
}

