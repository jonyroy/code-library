/*
* Author: Jony Roy
* Date: 17-02-2016
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
    int dp[1000];
    int fdp(int n)
    {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(dp[n])
            return dp[n];
        else
        {
            dp[n]=fdp(n-1)+fdp(n-2);
            return dp[n];
        }
    }
    int main()
    {
        int n;
        fdp(10);
        while(cin>>n)
          {
              printf("%d\n",dp[n]);
          }
          return 0;
    }
