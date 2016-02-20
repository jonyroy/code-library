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
    char s[1000005];
    int n,i,a,g,sa=0,sg=0,test=0;
    scanf("%d%d%d",&n,&a,&g);
    s[0]='A';
    sa=a;
    for(i=1;i<n;i++)
    {
        scanf("%d%d",&a,&g);
        if(abs((sa+a)-sg)<=500)
        {
            sa+=a;
            s[i]='A';
        }
        else if(abs((sg+g)-sa)<=500)
        {
            sg+=g;
            s[i]='G';
        }
        else{
            test=1;
        break;
        }
    }
    if(test==0)
    {
        s[i]='\0';
        printf("%s\n",s);
    }
    else
    printf("-1\n");
    return 0;
}
