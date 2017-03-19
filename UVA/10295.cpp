/*
* Author: Jony Roy
* Date: 22-06-2016
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
    int n,m;
    scanf("%d%d",&n,&m);
    map<string,int>a;
    for(int i=1;i<=n;i++)
    {
        string st;
        int vl;
        cin>>st>>vl;
        a[st]=vl;
    }
    getchar();
    for(int i=1;i<=m;i++)
    {
        string st;
        int sum=0;
        bool flag=false;
        while(getline(cin,st))
        {
            string s;
            istringstream iss(st);
            while(iss>>s)
            {
                if(s==".")
                {
                    flag=true;
                    break;
                }
                sum+=a[s];
            }
            if(flag)
                break;
        }
        cout<<sum<<endl;
    }
    return 0;
}
