#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[105],sum=0,count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if((sum-a[i])%2==0)
            count++;
    }
    cout<<count<<endl;
}
