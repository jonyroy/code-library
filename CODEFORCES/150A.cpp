
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
    int n,k,store[1000]={0},s[50];
    cin>>n>>k;
    for(int i=1;i<=k;i++)
        {
        cin>>s[i];
        store[s[i]]=1;
        }
        for(int i=1;i<=k;i++)
        {
            cout<<s[i]<<" ";
            int coun=1,j=1;
           while(j<=n*k)
           {
               if(coun<=n-1&&store[j]==0)
                {
               cout<<j<<" ";
               store[j]=1;
               coun++;
                }
               j++;
           }
           cout<<endl;
        }
    return 0;
}
