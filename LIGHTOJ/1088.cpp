/*
* Author: Jony Roy
* Date: 12-07-2016
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
    for(int i=1;i<=tc;i++)
    {
        printf("Case %d:\n",i);
        int n,q,a[100005];
        scanf("%d%d",&n,&q);
        for(int j=1;j<=n;j++)
            scanf("%d",&a[j]);
        for(int j=1;j<=q;j++)
        {
            int l,r;
            scanf("%d%d",&l,&r);
            int rr=upper_bound(a+1,a+n+1,r)-(a+1);
            int ll=lower_bound(a+1,a+n+1,l)-(a);
            printf("%d\n",rr-ll+1);
        }
    }
    return 0;
}
