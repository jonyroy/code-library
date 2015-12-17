//Accepted
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
int main()
{
    char s[15];
    i T=1;
    while(scanf("%s",s))
    {
        if(s[0]=='*')
        break;
        if(strcmp(s,"Hajj")==0)
        printf("Case %ld: Hajj-e-Akbar\n",T);
        else
        printf("Case %ld: Hajj-e-Asghar\n",T);
        T++;
    }
    return 0;
}

