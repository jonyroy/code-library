/*
* Author: Jony Roy
* Date: 16-07-2016
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
    int n,a[205];
    cin>>n;
    for(int i=1;i<=2*n;i++)
        cin>>a[i];
    sort(a+1,a+2*n+1);
    int sum=0;
    //for(int i=1;i<=2*n;i++)
      //  cout<<a[i]<<" ";
    for(int i=1;i<=2*n;i+=2)
        sum+=a[i];
    cout<<sum<<endl;
    return 0;
}