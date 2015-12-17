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
#define OR ||
#define AND &&
#define P printf
#define S scanf
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;

const int N = 200000;
int n, m, k;
long long a[N];
int l[N], r[N], d[N];
long long open[N], close[N];
long long add[N], sub[N];

struct data
{
    char name[100];
    long int height, weight;
    long int income;
};
bool compare( data a, data b )
{
    if( a.income == b.income )
        {
        if( a.height == b.height )
        {
            if( a.weight == b.weight )
              return strlen( a.name ) < strlen( b.name );
            else
                return (a.weight < b.weight);
        }
      else
        return (a.height > b.height);
      }
    else
        return (a.income > b.income);
}
int main()
{
    vector<data>s;
    char n[25];
    data tem;
    long int h,w,in,can,i;
    cout<<"Name :      Height   Weight    Income"<<endl;
    while(cin>>tem.name>>tem.height>>tem.weight>>tem.income)
    {
      s.push_back(tem);
    }
    sort(s.begin(),s.end(),compare);
    cout<<"Selected Candidate\n";
    cout<<s[0].name<<"  "<<s[0].height<<"  "<<s[0].weight<<"  "<<s[0].income;
    return 0;
}
