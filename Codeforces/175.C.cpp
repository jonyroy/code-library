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
    long int n[300050],m,coun=0;
    cin>>m;
    for(long int i=1;i<=m;i++)
        cin>>n[i];
    sort(n+1,n+m+1);
   long  long int s=0;
    for(int i=1;i<=m;i++)
    {
       if(n[i]<0)
       {
           s=s+(n[i]*(-1))+1;
           s=s+i-1;
       }
       else if(n[i]==0)
        s=s+i;
       else if(n[i]<i)
       {
           s=s+i-n[i];
       }
       else if(n[i]>i)
        s=s+n[i]-i;
    }
    cout<<s<<endl;
    return 0;
}
