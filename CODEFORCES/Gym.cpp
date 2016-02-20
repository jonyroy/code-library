#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <cassert>
#include <ctime>
using namespace std;
int main()
{
    int a,t,n;
    char b;
    freopen("ghanophobia.in","r",stdin);
    freopen("ghanophobia.ou","w",stdout);
    cin>>t;
    for(int i=1;i<=t;i++)
        {
         cin>>a>>b>>n;
         cout<<"Case "<<i<<":"<<" ";
          if(n==0&&a>0)
            cout<<"YES\n";
          else if(a==n)
            cout<<"NO\n";
          else
            cout<<"PENALTIES\n";
        }
    return 0;
}
