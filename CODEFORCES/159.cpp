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
int hashing[30][200005],counting[130];
int main()
{
    int k,n;
    string str,s;
    cin>>k;
    getchar();
    cin>>s>>n;
    int len=s.size();
    len=len*k;
    str=s;
    for(int i=1;i<k;i++)
        str+=s;
        for(int i=0;i<len;i++)
        {
            counting[str[i]]++;
            int a=str[i]-97;
            hashing[a][counting[str[i]]]=i;
        }
        for(int i=1;i<=n;i++)
        {
            int b,c;
            char ch;
            scanf("%d",&b);
            getchar();
            scanf("%c",&ch);
            c=ch-97;
            int d=hashing[c][b];
            str[d]='0';
        }
        for(int i=0;i<len;i++)
        if(str[i]!='0')
        cout<<str[i];
    return 0;
}
