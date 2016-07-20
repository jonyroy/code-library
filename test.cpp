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
    int n;
    while( cin>>n){
    int a;
    int dp[140][3]= {0};

    for(int i=1; i<=n; i++)
    {
        cin>>a;
        if(a==1)
        {
            if(dp[i-1][a]==0)
            {
                dp[i][0]=dp[i-1][0]+1;
                dp[i][a]=1;
            }
            else
            {
                dp[i][0]=dp[i-1][0];
            }
        }
        else if(a==2)
        {
            if(dp[i-1][a]==0)
            {
                dp[i][0]=dp[i-1][0]+1;
                dp[i][a]=1;
            }
            else
            {
                dp[i][0]=dp[i-1][0];
            }
        }
        else if(a==3)
        {
            if(dp[i-1][1]==0)
            {
                dp[i][0]=dp[i-1][0]+1;
                dp[i][1]=1;
            }
            else
            {
                dp[i][0]=dp[i-1][0]+1;
                dp[i][2]=1;
            }
        }
        else
        {
            dp[i][0]=dp[i-1][0];
        }
    }
    cout<<n-dp[n][0]<<endl;
    }
    return 0;
}
