#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long sum[500005],coun=0,a,n;
    sum[0]=0;
    scanf("%I64d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%I64d",&a);
        sum[i]=sum[i-1]+a;
    }
    long long int cnt=0,cn=0,s=sum[n]/3;
    if(sum[n]%3==0)
    for(int i=1;i<n;i++)
    {
        if(sum[i]==2*s)
            cnt+=cn;
        if(sum[i]==s)
            cn++;
    }
    printf("%I64d\n",cnt);
    return 0;
}
