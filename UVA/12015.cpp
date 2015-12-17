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
#define  i int
int main()
{
    char *s[15];
    i T,j,b[15],max,n,k=1;
    scanf("%ld",&T);
    while(k<=T)
    {
        for(j=0;j<10;j++)
        {
             s[j]=new char[104];
            scanf("%s%d",s[j],&b[j]);
        }
        max=-100;
        for(j=0;j<10;j++)
        {
            if(max<=b[j])
            {
                max=b[j];
                n=j;
            }
        }
        printf("Case #%d:\n",k);
        for(j=0;j<10;j++)
        {
        if(b[n]==b[j])
        printf("%s\n",s[j]);
        }
        k++;
    }
    return 0;
}

