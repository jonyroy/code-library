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
    int tc;
    scanf("%d",&tc);
    for(int i=1; i<=tc; i++)
    {
        int n;
        int twod[205][105]= {0};
        scanf("%d",&n);
        for(int j=1; j<=n; j++)
        {
            for(int k=1; k<=j; k++)
                scanf("%d",&twod[j][k]);
        }
        int l=1;
        for(int j=n+1; j<2*n; j++)
        {
            for(int k=1; k<=n-l; k++)
                scanf("%d",&twod[j][k]);
                l++;
        }
        for(int j=2; j<=n; j++)
        {
            for(int k=1; k<=j; k++)
            {
                twod[j][k]=max(twod[j][k]+twod[j-1][k],twod[j][k]+twod[j-1][k-1]);
            }
        }
        l=1;
        for(int j=n+1; j<2*n; j++)
        {
            for(int k=1; k<=n-l; k++)
              twod[j][k]=max(twod[j][k]+twod[j-1][k],twod[j][k]+twod[j-1][k+1]);
              l++;
        }
        printf("Case %d: %d\n",i,twod[2*n-1][1]);
    }
    return 0;
}
