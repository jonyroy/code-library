#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200005];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    a[0]=0;
    long long int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=abs(a[i]-a[i-1]);
    }
    cout<<sum<<endl;
    return 0;
}
