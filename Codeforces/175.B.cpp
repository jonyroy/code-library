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
    int n,s,t,coun=0;
    bool test=false;
    int v[100050];
    cin>>n>>s>>t;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    if(s==t)
    {
        cout<<coun;
        return 0;
    }
    while(v[s])
    {
       if(v[s]==t)
       {
           test=true;
           break;
       }
      coun++;
      int tem=s;
      s=v[s];
      v[tem]=0;
    }
    coun=coun+1;
    if(test==true)
        cout<<coun;
    else
        cout<<"-1";
    cout<<endl;
    return 0;
}
