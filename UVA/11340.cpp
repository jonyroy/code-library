#include<list>
#include<map>
#include<set>
#include<deque>
#include<queue>
#include<stack>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<utility>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<vector>
#include<cstring>
#include<cassert>
#include<ctime>
#include<sstream>
#include<stdbool.h>
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
#define MAX 1000000000
vector<long int>v;

int main()
{
    int n;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
   cin>>n;
   for(int q=1;q<=n;q++)
   {
       long int k;
       cin>>k;
      unsigned long long int coun=0;
       long int store[300]={0};
       for(int p=1;p<=k;p++)
       {
           unsigned char c;
           int v;
           cin>>c>>v;
           store[c]=v;
       }
       long long int m;
       cin>>m;
       getchar();
       for(int i=1;i<=m;i++)
       {
           string s;
           getline(cin,s);
           long int len=s.size();
           for(int j=0;j<len;j++)
           {
               coun=coun+store[s[j]];
           }
       }
       long int a=coun/100;
       long int b=coun%100;
       printf("%ld.%02ld$\n",a,b);
   }
    return 0;
}
