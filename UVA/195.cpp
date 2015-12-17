
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
#define  i long
using namespace std;
int main()
{
    i T,len;
    char c[1000];
    scanf("%ld\n",&T);
    while(T--)
    {
        scanf("%s",c);
       len=strlen(c);
       sort(c,c+len);
       do
       {
           printf("%s\n",c);
       }while(next_permutation(c,c+len));
    }
    return 0;
}
