#include<bits/stdc++.h>
using namespace std;
#define M 100010
long int l[M],r[M],ll[M],sum[M],a[M],d[M],x[M],y[M];
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
        {
        cin>>l[i]>>r[i]>>d[i];

        }
    for(int i=1;i<=k;i++)
        {
        cin>>x[i]>>y[i];
        ll[x[i]]++,ll[y[i]+1]--;
        }
        for(int i=1;i<=m;i++)
        {
            ll[i]+=ll[i-1];
            sum[l[i]]+=d[i]*ll[i];
            sum[r[i]+1]-=d[i]*ll[i];
        }
        for(int i=1;i<=n;i++)
        {
           sum[i]+=sum[i-1];
           cout<<a[i]+sum[i]<<" ";
        }
    return 0;
}
