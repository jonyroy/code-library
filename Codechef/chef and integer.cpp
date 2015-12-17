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
    LL n,m[100005],x,a,j=1,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
        cin>>a;
        if(a<0)
            {
            m[j++]=a;
            sum+=(-1*a);
            }
        }
        cin>>x;
        sort(m+1,m+j);
        sum=min(sum,x*(-1*m[1]));
        LL b=(-1*m[2])*x+(-1*m[1]-(-1*m[2]));
        sum=min(sum,b);
        cout<<sum<<endl;
    return 0;
}
