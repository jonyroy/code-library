#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,k,a[2005];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    long int sum=0;

        for(int i=n;i>=1;i-=k)
        sum+=(2*(a[i]-1));
        cout<<sum<<endl;
}
