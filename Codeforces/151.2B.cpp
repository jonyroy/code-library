#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        sum+=a;
    }
    if(sum%n==0)
    cout<<n;
    else
    cout<<n-1;
}
