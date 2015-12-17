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
    int n,m,k,a[100],b,i,count;
    bool test;
    scanf("%d%d%d",&n,&m,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,a+n);
    if(k>=m)
    printf("0\n");
    else
    {
        b=m-k+1;
        count=1;
        for(i=n-1;i>=0;i--)
        {
            c=
          /* if(b<=a[i])
            {
                printf("%d\n",count);
                test=true;
                break;
            }
            else
            {
                b=b-a[i]+1;
                count++;
            }*/
        }
        if(test==false)
        printf("-1\n");
    }
    return 0;
}





