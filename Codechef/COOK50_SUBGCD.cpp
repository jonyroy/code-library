#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a,m;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int b[100005]={0};
        scanf("%ld",&n);
        scanf("%ld",&a);
        for(int i=2;i<=n;i++)
        {
            scanf("%ld",&m);
            if(__gcd(a,m)==1)
                b[i]=1;
                a=m;
        }
        long cnt=0,cn=0;
        for(int i=2;i<=n;i++)
        {
            if(b[i])
            cn++;
            else
            {
                cnt=max(cn,cnt);
                cn=0;
            }
        }
        cnt=max(cnt,cn);
        if(cnt)
            printf("%ld\n",cnt+1);
        else
            printf("-1\n");
    }
    return 0;
}
