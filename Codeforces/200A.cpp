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

#define pb  push_back
#define pob pop_back
#define mp  make_pair
#define EPS  (1E-9)
#define sqr(x)  ((x) * (x))
#define For(i,k,r)  for(int i = k; i <= r; i++)
#define Fill(a,b)   memset(a,b,sizeof(a))
#define OR ||
#define AND &&
#define P printf
#define S scanf
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
int main()
{
    int t=1,n,m[100005],i=1;
    cin>>n;
    while(t<=n)
    {
       cin>>m[i++];
       t++;
    }
    int cou=0;
    for(i=1;i<=n;i++)
    {
       while(m[i]!=m[i+1]&&i<=n)
        {
        i++;
        cou++;
        }
    }
    cout<<cou<<endl;
    return 0;
}
