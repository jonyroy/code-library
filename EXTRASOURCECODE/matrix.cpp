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
    int m[100][100],i,j,c[100],r[100],a,b,R,C;
    for(i=1;i<=100;i++)
    {
        c[i]=i;
        r[i]=i;
    }
    printf("Enter Row And Column.\n");
    scanf("%d%d",&R,&C);
    for(i=1;i<=R;i++)
    for(j=1;j<=C;j++)
    scanf("%d",&m[i][j]);
    printf("\n\nChange Row.\n");
    scanf("%d%d",&a,&b);
    if(a<=C&&b<=C)
    swap(c[a],c[b]);
    else
    printf("Invalid Input.\n");
    printf("Change Column.\n");
    scanf("%d%d",&a,&b);
    if(a<=R&&b<=R)
    swap(r[a],r[b]);
    else
    printf("Invalid Input.\n");
    for(i=1;i<=R;i++)
    {
    for(j=1;j<=C;j++)
    printf("%d ",m[r[i]][c[j]]);
    printf("\n");
    }
    return 0;
}

