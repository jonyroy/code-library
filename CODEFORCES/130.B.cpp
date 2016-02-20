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
    long long int n,m[6]={0};
    bool test=false;
    long long int p[60],a[6];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
    long long int v=0;
    for(int i=1;i<=n;i++)
    {
        v=v+p[i];
        for(int j=5;j>=1;j--)
        {
        m[j]=m[j]+v/a[j];
        v=v%a[j];
        }
    }
    for(int i=1;i<=5;i++)
    printf("%I64d ",m[i]);
    cout<<endl;
    cout<<v<<endl;
    return 0;
}
