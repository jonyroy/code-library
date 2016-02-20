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
#define MAX 1000100
long int status[1000100]={0};
int primeNumber()
{
    long long int N=sqrt(MAX);
    for(long int i=3;i<=N;i+=2)
    {
    if(status[i]==0)
    {
    for(long int j=i*i;j<=MAX;j+=i+i)
    status[j]=1;
    }
    }
    status[0]=1;
    status[1]=1;
    status[2]=0;
    return 0;
}
int main()
{
    primeNumber();
 long long int n,m;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     cin>>m;
     if(m==4){
        cout<<"YES\n";
        continue;
     }
     long long int s=(long long int)sqrt((double)m);
     if(s*s==m&&status[s]==0&&s%2==1)
        cout<<"YES";
     else
        cout<<"NO";
     cout<<endl;
 }
    return 0;
}

