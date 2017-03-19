/*
* Author: Jony Roy
* Date: 05-08-2016
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
ullint a[100],b[100];

template< class T> T bigMod(T a,T b,T MOD)
{
    if(b==0) return 1;
    T temp=bigMod(a,b>>1,MOD);
    temp=(temp*temp)%MOD;
    if(b&1) temp= (a*temp)%MOD;
    return temp;
}

int main()
{
    llint ans,cnt=0;
    string n;
    int arr[105];
    arr[0]=0;
    for(int i=1;i<=100;i++)
    {
       ans=bigMod(i,i,10);
       cnt+=ans;
       cnt=cnt%10;
       arr[i]=cnt;
    }
    while(1)
    {
        cin>>n;
        if(n[0]=='0')
        return 0;
        int rem=0;
        for(int i=0;i<n.size();i++)
        {
            rem=rem*10+(n[i]-48);
            rem=rem%100;
        }
        printf("%d\n",arr[rem]);
    }
    return 0;
}

