/*
* Author: Jony Roy
* Date: 17-06-2016
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
bool rePeatDigit(int n)
{
    int a[15]={0};
    while(n)
    {
        a[n%10]++;
        n/=10;
    }
    for(int i=0;i<=9;i++)
    {
        if(a[i]>1)
            return false;
    }
    return true;
}
int main(int argc, char *argv[])
{

   int a[5005];
   a[0]=0;
   for(int i=1;i<=5000;i++)
   {
       if(rePeatDigit(i))
        a[i]=a[i-1]+1;
        else
            a[i]=a[i-1];
   }
   int n,m;
   while(cin>>n>>m)
   {
       cout<<a[m]-a[n-1]<<endl;
   }
   return 0;
}

