/*
* Author: Jony Roy
* Date: 02-08-2016
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
int taken[100]= {0};
vector<char> arr;
string a;
int PermuTation(int m)
{
    if(arr.size()==m)
    {
        for(int i=0; i<m; i++)
            printf("%c",arr[i]);
        puts("");
        return 0;
    }
    for(int i=0; i<m; i++)
    {
        if(taken[i]==0)
        {
            taken[i]=1;
            arr.pb(a[i]);
            PermuTation(m);
            taken[i]=0;
            arr.pop_back();
        }

    }
}

int main()
{
    cin>>a;
    int len=a.size();
    PermuTation(len);
}
