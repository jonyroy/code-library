#include<iostream>
#include<cstdio>
#include<map>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<queue>
#define inf 1600005
#define M 40
#define N 505
#define mp(a,b) make_pair(a,b)
#define mem(a,b) memset(a,b,sizeof(a))
#define sqr(a) ((a)*(a))
#define FOR(i,n)  for(int i=1;i<=n;i++)
#define rep(i,n)  for(int i=n;i>=1;i--)
using namespace std;
int main()
{
  long  int A=0,I=0,i,n;
    char c;
    scanf("%ld\n",&n);
    for(i=1;i<=n;i++)
    {
        c=getchar();
        if(c=='I')
        I++;
        else if(c=='A')
        A++;
    }
    if(I==1)
    printf("1\n");
    else if(I>1)
    printf("0\n");
    else
    printf("%ld\n",A);
    return 0;
}
