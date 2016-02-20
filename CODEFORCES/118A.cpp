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
int m[150];
int main ()
{
  m['A']=m['E']=m['I']=m['O']=m['U']=m['Y']=1;
  m['a']=m['e']=m['i']=m['o']=m['u']=m['y']=1;
  char a[120];
   scanf("%s",a);
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        if(!m[a[i]])
       (a[i]<97)?printf(".%c",a[i]+32):printf(".%c",a[i]);
    }
    return 0;

}
