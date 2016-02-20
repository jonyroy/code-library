#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[300005],n,sum=0;
    a[0]=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=2;i<=n;i++)
        a[i]+=a[i-1];
        sum=a[n];
    for(int i=0;i<n-1;i++)
        sum+=(a[n]-a[i]);
    cout<<sum;
}
