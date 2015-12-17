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
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
struct pairs
{
    int a,b;
};
int main()
{
    vector<int>v[10];
    vector<int>::iterator it;
    int a,n;
    for(int i=0;i<5;i++)
        for(int j=0;j<3;j++)
        {
          cin>>a;
          v[i].push_back(a);
        }
        for(int i=0;i<5;i++)
        {
        for(int j=0;j<3;j++)
        {
          cout<<v[i][j]<<"  ";
        }
        cout<<endl;
        }
    return 0;
}
