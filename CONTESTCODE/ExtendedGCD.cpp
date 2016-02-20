/*
* Author: Jony Roy
* Date: 19-02-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
#define x              first
#define y              second
using namespace std;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
//typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;

pllint ExtendedEuclid(llint a, llint b)
{
	if(b==0)
		return pllint(1,0);
    else
    {
    	pllint d=ExtendedEuclid(b,a%b);
        return pllint(d.y,d.x-d.y*(a/b));
    }
}

int main(int argc, char const *argv[])
{
    pllint n=ExtendedEuclid(1124,84);
    cout<<n.x<<" "<<n.y<<endl;
    return 0;
}