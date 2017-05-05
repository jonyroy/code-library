/*
* Author: Jony Roy
* Date: 14-07-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define pb(x)          push_back(x)
#define mp(x,y)          make_pair(x,y)
#define ft              first
#define sd              second
#define deb(x) cerr << #x << " = " << x << endl;

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
int main()
{
    llint t,s,x;
    cin>>t>>s>>x;

    if(t==x)
    {
        cout<<"YES\n";
        return 0;
    }
    if(t+s==x)
    {
        cout<<"YES\n";
        return 0;
    }
    if(t+s+1==x)
    {
        cout<<"YES\n";
        return 0;
    }
    llint ans=x/s;
    ans=s*ans;
    ans+=t;
    if(ans==x || (ans+1)==x && s<=x)
    {
        cout<<"YES\n";
        return 0;
    }
    cout<<"NO\n";
    return 0;
}
