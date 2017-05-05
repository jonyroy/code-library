/*
* Author: Jony Roy
* Date: 23-06-2016
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

llint bigMod(llint a,llint b,llint MOD)
{
    if(b==0)
        return 1;
    llint temp=bigMod(a,b>>1,MOD);
    temp=(temp*temp)%MOD;
    if(b&1)
        temp= (a*temp)%MOD;
    return temp;
}

int main(int argc, char *argv[])
{

   llint n,x;
   cin>>n>>x;
   llint counter=0;
   while(n)
   {
       string s;
       int a;
       cin>>s>>a;

       if(s=="-")
       {
           if(a>x)
            counter++;
            else
                x=x-a;
       }
       else
        x+=a;
       n--;
   }
   cout<<x<<" "<<counter<<endl;
   return 0;
}

