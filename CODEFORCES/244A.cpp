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
    int n,k,a[1000]={0},b[35],l=1;
    cin>>n>>k;
    for(int i=1;i<=k;i++)
        {
        cin>>b[i];
        a[b[i]]=1;
        }
    for(int i=1;i<=k;i++)
    {
        int j=0;
        cout<<b[i];
        a[b[i]]=1;
        while(1)
        {
          if(j==n-1)
           break;
           if(!a[l])
           {
               cout<<" "<<l;
               a[l]=1;
               j++;
           }
           l++;
        }
        cout<<endl;
    }
    return 0;
}
