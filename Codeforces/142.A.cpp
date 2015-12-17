#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <utility>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstring>
#include <cassert>
#include <ctime>
#include <stdbool.h>
using namespace std;
#define pb  push_back
#define pob pop_back
#define mp  make_pair
#define EPS  (1E-9)
#define sqr(x)  ((x) * (x))
#define For(i,k,r)  for(int i = k; i <= r; i++)
#define Fill(a,b)   memset(a,b,sizeof(a))
#define PI 3.141592653589793
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
int main()
{
    int s,n,x,y;
    //pair<int,int>p;
    vector<PII>m;
    bool   test=false;
    cin>>s>>n;
    for(int i=1;i<=n;i++)
        {
        cin>>x>>y;
        m.push_back(make_pair(x,y));
        }
        sort(m.begin(),m.end());
    for(int i=0;i<n;i++)
    {
        if(s>m[i].first)
            s=s+m[i].second;
        else
        {
            test=true;
            break;
        }
    }
    if(test==true)
        cout<<"NO";
    else
        cout<<"YES";
    cout<<endl;
    return 0;
}

