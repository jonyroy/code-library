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

llint BigMod(llint a,llint b,llint MOD)
{
    if(b==0)
    return 1;
    llint x=BigMod(a,b/2,MOD);
    x=(x*x)%MOD;
    if(b%2)
    x=(x*a)%MOD;
    return x;
}
int main()
{
	int a;
	a=BigMod(3,2016,10);
    cout<<a<<endl;
    return 0;
}

