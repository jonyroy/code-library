#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100005];
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    cout<<abs(a[2]-a[1])<<" "<<abs(a[n]-a[1])<<endl;
    for(int i=2;i<n;i++)
    {
        cout<<min(abs(a[i+1]-a[i]),abs(a[i]-a[i-1]))<<" "<<max(abs(a[n]-a[i]),abs(a[i]-a[1]))<<endl;
    }
    cout<<abs(a[n]-a[n-1])<<" "<<abs(a[n]-a[1])<<endl;
    return 0;
}
