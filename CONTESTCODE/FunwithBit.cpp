/*
* Author: Jony Roy
* Date: 21-02-2016
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
	unsigned int number=154245,n;
    while(cin>>number>>n)
    {
       number |= (1<<n);   //Set nth bit in an unsinged integer
       number &= ~(1<<n);  //Clear nth bit 
       number ^= (1<<n);   //Fliping nth bit
       int bit=(number >>n) && 1;
       cout<<number<<" "<<bit<<endl;
    }
    return 0;
}