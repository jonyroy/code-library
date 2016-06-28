/*
* Author: Jony Roy
* Date: 08-05-2016
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
bitset<20000005> testPrime;

int main(int argc, char *argv[])
{
    int n=sqrt(20000005);
    testPrime[2]=false;
    testPrime[3]=false;
    for(int i=3;i<=n;i+=2)
    {
        if(!testPrime[2])
        {
            for(int j=i*i;j<=20000000;j+=i)
                testPrime[j]=true;
        }
    }
    int m;
    while(cin>>m)
    {
        if(!testPrime[m])
            cout<<"Y\n";
        else
            cout<<"N\n";
    }
    return 0;
}
